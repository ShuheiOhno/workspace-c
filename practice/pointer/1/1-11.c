#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void){
    int a, b;
    puts("二つの整数を入力");
    printf("A:"); scanf("%d", &a);
    printf("B:"); scanf("%d", &b);

    swap(&a, &b); //関数の引数の定義より、ポインタ型を渡す

    puts("整数AとBの値を交換しました"); //引数自体をの値を書き換えているわけではない。あくまで渡したアドレス
    printf("A:%d\n", a);
    printf("B:%d\n", b);
    return 0;
}