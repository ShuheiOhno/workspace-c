#include <stdio.h>
#include <stdlib.h>

//int型の配列を動的に確保
int main(void){
    int n;

    printf("要素数:");
    scanf("%d", &n);

    int *x = calloc(n, sizeof(int));

    if (x == NULL)
        puts("記憶域の確保失敗");
    else {
        for (int i = 0; i < n; i ++){
            x[i] = i;
        }
        for (int i = 0; i < n; i++){
            printf("x[%d] = %d\n", i, x[i]);
        }
        free(x);
    }

    return 0;
}