#include <stdio.h>

int main(void){
    int a,b;

    puts("二つの整数を入力せよ");
    printf("a:"); scanf("%d", &a);
    printf("b:"); scanf("%d", &b);

    printf("aはbの%f%%\n", (double)a / b * 100);
    return 0;
}