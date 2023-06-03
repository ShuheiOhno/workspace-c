#include <stdio.h>

int main(void){
    int height;
    printf("一辺");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++){
        // putchar('*');
        for(int j = 1; j <= height; j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}