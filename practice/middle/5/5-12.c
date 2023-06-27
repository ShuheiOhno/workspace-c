#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *x = calloc(1, sizeof(int)); //確保

    if (x == NULL)
        puts("記憶域の確保に失敗しました");
    else {
        *x = 67;
        printf("%d", *x);
        free(x);
    }
    return 0;
}