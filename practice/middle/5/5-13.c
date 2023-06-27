#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *x = calloc(1, sizeof(int)); //確保

    if (x == NULL)
        puts("記憶域の確保に失敗しました");
    else {
        printf("*xに格納する値:");
        scanf("%d", x);
        printf("%d", *x);
        free(x);
    }
    return 0;
}