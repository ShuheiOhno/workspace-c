#include <stdio.h>

int main(void){
    int a, b;
    int min, max;
    int sum = 0;
    int counter = 0;

    printf("整数を2つ入力\n");
    printf("a:"); scanf("%d", &a);
    printf("b:"); scanf("%d", &b);

    if (a < b) {
        min = a;
        max = b;
    } else {
        min = b;
        max = a;
    }

    do {
        sum += min;
        min += 1;
        // counter+=1;
    } while (min <= max);
    

    printf("%d以上%d以下の数の和:%d", max, min, sum);

    return 0;
}