#include <stdio.h>

int main(void){
    int num;
    do {
        printf("正の整数を入力");
        scanf("%d", &num);
        if (num <= 0)
            puts("\a正でない値を入力しないでください");
    } while (num < 1);

    printf("%dを逆から読むと、", num);
    while (num > 0)
    {
        printf("%d", num % 10);
        num = num / 10;
    }
    
    return 0;
}