#include <stdio.h>

int main(void){
    int num;

    printf("正の整数を入力");
    scanf("%d", &num);

    if (num > 0){
        int i = 2;
        while (i < num)
        {
            printf("%d\n", i);
            i += 2;
        }
        
    }

    // while (num > 0)
    // {
    //     if(num % 2 = 0){
    //         printf("%d\n", num);
    //     }
    //     num--;
    // }
    
    return 0;
}