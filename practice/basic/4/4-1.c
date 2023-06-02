#include <stdio.h>
int main(void){
    int num, retry;
    do {
        printf("整数を入力");
        scanf("%d", &num);
        if(num == 0){
            printf("0\n");
        } else if (num > 0)
        {
            printf("+\n");
        } else {
            printf("-\n");
        }
        printf("リトライ？ yes:1 no:0\n");
        scanf("%d", &retry);
        
    } while (retry == 1);

    return 0;
} 