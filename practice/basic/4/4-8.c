#include <stdio.h>

int main(void){
    int num;

    printf("正の整数を入力");
    scanf("%d", &num);

    int counter = 1;
    if(num > 0){
        printf("{");
        while (num > counter)
        {
            printf("%d,", counter);
            counter++;
        }
        printf("%d}", num);
        
    }

    return 0;
}