#include <stdio.h>

void swap(int x, int y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main(void) {
    int a, b;

    puts("二つの整数を入力してください");
    printf("整数A:"); scanf("%d", &a);
    printf("整数B:"); scanf("%d", &b);
    swap(a, b); //変わりそうで変わらない

    puts("整数AとBの値を交換しました\n");
    printf("Aの値は%dです\n", a); //誤り
    printf("Bの値は%dです\n", b); //誤り

    return 0;
}