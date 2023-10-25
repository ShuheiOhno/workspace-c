//ユークリッド
#include <stdio.h>

//最大公約数を返却
int gcd(int x, int y){
    if(y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int main(void){
    int x, y;

    printf("Input x:"); scanf("%d", &x);
    printf("Input y:"); scanf("%d", &y);
    printf("kouyakusuu:%d\n", gcd(x, y));
    return 0;
}