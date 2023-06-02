#include <stdio.h>

int main(void){
    int num;

    printf("整数を入力");
    scanf("%d", &num);

    for (int i = 1;i <= num ; i += 2){
        printf("%d\n", i);
    }
    return 0;
}