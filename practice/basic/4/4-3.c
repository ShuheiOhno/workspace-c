#include <stdio.h>

int main(void){
    int num;

    printf("整数を入力");
    scanf("%d", &num);

    if(num > 0){
        while (num >= 0)
        {
            printf("%d", num);
            num -= 1;
        }
        
    }

    return 0;
}