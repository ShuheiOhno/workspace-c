#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *x, int *y, int *z) {
    if (*x > *y) {
        swap(x, y); //xはポインタ
    } 
    if (*x > *z) {
        swap(x, z);
    }
    if (*y > *z) {
        swap(y, z);
    }
    
}

int main(void) {
    int a, b, c;
    puts("三つの整数を入力してください");
    printf("整数A："); scanf("%d", &a);
    printf("整数B："); scanf("%d", &b);
    printf("整数C："); scanf("%d", &c);

    sort(&a, &b, &c);

    puts("Result:");
    printf("A:%d\n", a);
    printf("B:%d\n", b);
    printf("C:%d\n", c);


    return 0;
}