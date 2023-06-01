#include <stdio.h>

int main(void){

    int num;
    printf("整数を入力してください:");
    scanf("%d", &num);
    printf("%d+20=", num);
    printf("%d\n", num+20);

    return 0;
}