#include <stdio.h>

int main(void){
    int a, b;
    printf("a:"); scanf("%d", &a);
    printf("b:"); scanf("%d", &b);

    if (a == b){
        printf("a=b");
    } else if (a > b){
        printf("a>b");
    }else {
        printf("a<b");
    }
    return 0;
}