#include <stdio.h>

void scan2double(double *x1, double *x2){
    printf("1番目:");
    scanf("%lf", x1);
    do {
        printf("2番目:");
        scanf("%lf", x2);
    } while(*x2 < *x1);
}

int main(void){
    double a, b, c, d;

    puts("AとBを昇順に入力");
    scan2double(&a, &b);
    puts("CとDを昇順に入力");
    scan2double(&c, &d);

    printf("AとBの差:%f\n", b - a);
    printf("CとDの差:%f\n", d - c);
    return 0;
}