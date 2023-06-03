#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort3(int *n1, int *n2, int *n3){
    if (*n1 > *n2) swap(n1, n2);
    if (*n2 > *n3) swap(n2, n3);
    if (*n1 > *n2) swap(n1, n2);
}

int main(void){
    int a, b, c;
    puts("三つの整数を入力");
    printf("A: "); scanf("%d", &a);
    printf("B: "); scanf("%d", &b);
    printf("C: "); scanf("%d", &c);

    sort3(&a, &b, &c);

    puts("昇順にソート");
    printf("Aは%d\n", a);
    printf("Bは%d\n", b);
    printf("Cは%d\n", c);
    return 0;
}