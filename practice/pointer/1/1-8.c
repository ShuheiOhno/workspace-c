#include <stdio.h>

int main(void){
    int n = 123;
    int *p = &n; //ポインタの初期化

    printf("nの値:%d\n", n);
    printf("pの値:%d\n", *p);
    // printf("%d", p);//警告が出る
    return 0;
}