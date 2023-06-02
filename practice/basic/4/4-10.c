#include <stdio.h>

int main(void){
    int num;

    printf("正の整数を入力");
    scanf("%d", &num);

    if (num > 0){
        while (num > 0)
        {
            if(num != 1){
                putchar('+');
                putchar('-');
                num -= 2;
            } else
            {
                putchar('+');
                num --;
            }
            

        }
        
    }


    return 0;
}