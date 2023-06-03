#include <stdio.h>

int main(void){
    int square;
    printf("面積");
    scanf("%d", &square);

    for (int tate = 1; tate < square; tate++)
    {
        if (tate * tate > square) break;
        if( square % tate != 0) continue;
        printf("%d × %d\n", tate, square / tate);
    }
    

    return 0;
}