#include <stdio.h>

void swap(int x, int y){ //x,yは仮引数
    int temp = x;
    x = y;
    y = temp;
}

int main(void){
    int a, b;
    puts("二つの整数を入力");
    printf("A:"); scanf("%d", &a);
    printf("B:"); scanf("%d", &b);
    swap(a, b); //a,bは実引数
    puts("整数AとBの値を交換しました"); //失敗する
    printf("A:%d\n", a);
    printf("B:%d\n", b);
    return 0;
}