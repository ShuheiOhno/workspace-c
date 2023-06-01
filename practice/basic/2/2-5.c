#include <stdio.h>

int main(void){
    int x,y;
    puts("2つの整数を入力");
    scanf("%d", &x);
    scanf("%d", &y);
    int ave = (x + y) /2;
    printf("平均値%dの符号を反転させたものは%d", ave, -ave);
    return 0;
}