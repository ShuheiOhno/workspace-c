#include <stdio.h>

int main(void){
    double a,b;
    puts("二つの実数を入力せよ");
    printf("実数a:"); scanf("%lf", &a);
    printf("実数b:"); scanf("%lf", &b);

    printf("aはbの%f%%です", a / b * 100);
}