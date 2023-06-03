#include <stdio.h>

#define NUMBER 96

int main(void){
    int num;
    int a[NUMBER];

    printf("データ数");
    do {
        scanf("%d", &num);
        if(num < 1 || num > NUMBER){
            printf("1から%dで入力してください:", NUMBER);
        }
        } while (num < 1 || num > NUMBER);

        for (int i = 0; i < num; i++){
            printf("%2d番:", i);
            scanf("%d", &a[i]);
        }

        printf("{");
        for (int i = 0; i < num - 1; i++){
            printf("%d, ", a[i]);
        }
        printf("%d}\n", a[num - 1]);

    return 0;
}