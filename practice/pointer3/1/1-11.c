#include <stdio.h>

void swap(int *x, int *y) { //引数はポインタ
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a, b;
    puts("二つの整数を入力してください");
    printf("整数A:"); scanf("%d", &a);
    printf("整数B:"); scanf("%d", &b);

    swap(&a, &b); //引数はポインタ

    puts("整数AとBの値を交換しました\n");
    printf("Aの値は%dです\n", a);
    printf("Bの値は%dです\n", b);

    return 0;
}