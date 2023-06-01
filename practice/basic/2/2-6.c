#include <stdio.h>

int main(void){
    // 実数を入力する
    double x;
    printf("実数を入力：");
    scanf("%lf", &x); //%dではないので注意。scanfの実数表現は%lf
    printf("入力した値：%f", x); //printfの実数表現は%f
    return 0;
}