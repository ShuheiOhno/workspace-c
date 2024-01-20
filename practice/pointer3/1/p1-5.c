#include <stdio.h>

void sum_diff(int x, int y, int *wa, int *sa) {
    *wa = x + y;
    if (x <= y)
        *sa = y - x;
    else
        *sa = x - y;
}

int main(void) {
    int a, b;
    // int *sum;
    // int *diff;
    int sum, diff; //まずはメモリ領域を用意する
    printf("整数aを入力:"); scanf("%d", &a);
    printf("整数bを入力:"); scanf("%d", &b);
    sum_diff(a, b, &sum, &diff);
    printf("aとbの和%d\n", sum);
    printf("aとbの差%d\n", diff);
    return 0;
}