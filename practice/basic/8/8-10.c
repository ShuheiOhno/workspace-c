//ユークリッドの互除法
#include <stdio.h>

int gcd(int x, int y){
    if(y == 0){
        return x;
    } else {
        return gcd(y, x % y);
    }
}

int main(void){
    int x, y;
    puts("二つの整数の最大公約数を求める\n");

    printf("整数を入力:"); scanf("%d", &x);
    printf("整数を入力:"); scanf("%d", &y);
    printf("最大公約数は、%d\n", gcd(x, y));
    return 0;
}