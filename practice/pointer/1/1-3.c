#include <stdio.h>

int main(void){
    int n;
    int *ptr;

    n = 57;
    ptr = &n;

    printf("nの値=%d\n", n);
    printf("ptrの値=%d\n", *ptr); //*ptrはnのエイリアス
    return 0;
}