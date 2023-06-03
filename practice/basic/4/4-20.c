#include <stdio.h>

int main(void){
    int num;

    printf("整数を入力");
    scanf("%d", &num);

    // for (int i = num; i <= num; i--){
    //     if(num % i == 0){
    //         printf("%d\n", num / i);
    //     }
    // }
    int count = 0;
    for (int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d\n", i);
            count++;
        }
    }
    printf("約数の数は、%d個です", count);
    return 0;
}