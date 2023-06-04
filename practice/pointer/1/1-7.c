#include <stdio.h>

int main(void){
    int n;
    int *p;

    printf("int型は%dバイトです\n", (unsigned)sizeof(int));
    printf("int*型は%dバイトです\n", (unsigned)sizeof(int *));

    printf("nは%uバイト\n", (unsigned)sizeof(n));
    printf("*pは%uバイト\n", (unsigned)sizeof(*p));
    printf("pは%uバイト\n", (unsigned)sizeof(p));
    printf("&nは%uバイト\n", (unsigned)sizeof(&n));
    return 0;
}