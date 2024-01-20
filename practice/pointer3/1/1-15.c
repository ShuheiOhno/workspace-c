#include <stdio.h>

void scan2double(double *x, double *y) {
    printf("1番目:"); scanf("%lf", x);
    do {
        printf("2番目:"); scanf("%lf", y);
    } while(*x > *y);
}

int main(void) {
    double a, b, c, d;
    puts("aとbを昇順に入力せよ");
    scan2double(&a, &b);
    puts("cとdを昇順に入力せよ");
    scan2double(&c, &d);

    printf("aとbの差: %f\n",b-a);
    printf("cとdの差: %f\n",d-c);


    return 0;
}