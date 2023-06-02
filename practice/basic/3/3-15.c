#include <stdio.h>

int main(void){
    int num;
    printf("整数を入力");
    scanf("%d", &num);

    switch (num % 2)
    {
    case 0:
        printf("偶数");
        break;
    case 1:
        printf("奇数");
    default:
        break;
    }
    return 0;
}