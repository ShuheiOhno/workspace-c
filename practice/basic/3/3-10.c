#include <stdio.h>

int main(void){
    int a,b,c;
    puts("三つの整数を入力");

    printf("a:"); scanf("%d", &a);
    printf("b:"); scanf("%d", &b);
    printf("c:"); scanf("%d", &c);

    printf("最小値は%d", (a < b) ? ((a < c) ? a : b)
    :((b < c) ? b : c));
    return 0;
}