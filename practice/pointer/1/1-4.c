#include <stdio.h>

int main(void){
    int sw;
    int n1 = 15;
    int n2 = 73;
    int *p;

    printf("n1は%dで、n2は%dです\n", n1, n2);
    printf("どちらを変更するか(n1:1/n2/2):");
    scanf("%d", &sw);
    if(sw == 1){
        p = &n1;
    } else {
        p = &n2;
    }
    *p = 99; //pが指すオブジェクトに99を代入
    printf("n1は%dで、n2は%dです\n", n1, n2);
    return 0;
}