#include <stdio.h>

int main(void){
    // 上底、下底、高さ
    int a, b, height;

    printf("台形の面積\n");
    printf("上底"); scanf("%d", &a);
    printf("下底"); scanf("%d", &b);
    printf("高さ"); scanf("%d", &height);

    printf("面積:%lf", (double)(a + b) * height /2);
    return 0;
}