#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// m<=nとなるようにソート
void sort(int *m, int *n) {
    if (*m > *n)
        swap(m, n);
}

int main(void) {
    int a, b;

    puts("二つの整数を入力してください");
    printf("整数A:"); scanf("%d", &a);
    printf("整数B:"); scanf("%d", &b);

    sort(&a, &b);

    puts("昇順にソート");
    printf("A:%d ", a);
    printf("B:%d ", b);

    return 0;
}