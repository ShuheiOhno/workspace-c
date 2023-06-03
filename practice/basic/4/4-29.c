#include <stdio.h>

int main(void){
    int h;
    printf("段数:");
    scanf("%d", &h);

    for(int i = 1; i <= h; i ++){
        for(int j = 1; j <= i - 1; j++){
            putchar(' ');
        }
        for (int j = 1; j <= 2 * (h - i) + 1; j++){
            printf("%d", i % 10);
        }
        putchar('\n');
    }
    return 0;
}