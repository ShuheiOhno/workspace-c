#include <stdio.h>

int main(void){
    int h;
    printf("段数:");
    scanf("%d", &h);

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= h - i; j++){
            putchar(' ');
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}