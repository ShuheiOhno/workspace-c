#include <stdio.h>

int main(void){
    int a,b;
    puts("二つの整数を入力せよ");
    printf("a:"); scanf("%d", &a);
    printf("b:"); scanf("%d", &b);

    if (a % b){
        puts("bはaの約数ではない");
    } else {
        puts("cはaの約数");
    }

    return 0;
}