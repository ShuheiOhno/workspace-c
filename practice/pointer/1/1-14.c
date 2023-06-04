#include <stdio.h>

void swap(int *x, int *y){ //int *はポイント型のイメージ。xはポインタ型
    int temp = *x;
    *x = *y;
    *y = temp;
}

//昇順ソート
void sort2(int *n1, int *n2){
    if (*n1 > *n2){
        swap(n1, n2);
    }
}

int main(void){
    int a, b;
    puts("二つの整数を入力");
    printf("A:"); scanf("%d", &a);
    printf("B:"); scanf("%d", &b);

    sort2(&a, &b);
    puts("昇順にソートしました");
    printf("A:%d\n", a);
    printf("B:%d\n", b);

    return 0;
}