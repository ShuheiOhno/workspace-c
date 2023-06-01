#include <stdio.h>

int main(void){
        int a,b,c;
    printf("1つ目の整数を入力してください:");
    scanf("%d", &a);
    printf("2つ目の整数を入力してください:");
    scanf("%d", &b);
    printf("3つ目の整数を入力してください:");
    scanf("%d", &c);

    printf("a+b+c=%d\n", a+b+c);
}