#include <stdio.h>

void scan2double(double *x, double *y){
    printf("1番目:");
    scanf("%lf", x);

    do {
    printf("2番目:");
    scanf("%lf", y);
    } while(*x > *y);
}

int main(void){
    double a, b;

    puts("AとBを昇順に入力");
    scan2double(&a, &b);
    printf("AとBの差は%fです\n",b - a);
    return 0;
}