#include <stdio.h>

int main(void){
    int num;

    printf("正の整数を入力");
    scanf("%d", &num);

    if(num > 0){
        while (num)
        {
            // printf("#");
            putchar('#');
            num--;
        }
        
    }

    return 0;
}