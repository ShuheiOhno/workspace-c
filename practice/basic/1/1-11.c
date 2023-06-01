#include <stdio.h>

int main(void){
    int a,b;
    printf("1つ目の整数を入力してください:");
    scanf("%d", &a);
    printf("2つ目の整数を入力してください:");
    scanf("%d", &b);

    printf("a*b=%d\n", a*b);
}