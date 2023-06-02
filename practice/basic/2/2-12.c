#include <stdio.h>

int main(void){
    int height;

    printf("身長\n");
    scanf("%d", &height);

    printf("標準体重:%.1f\n", (height - 100) * 0.9); //小数第一桁まで
    printf("%f", (height - 100) * 0.9);
    return 0;
}