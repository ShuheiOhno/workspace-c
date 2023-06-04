#include <stdio.h>

int main(void){
    int a[5];
    printf("配列 sizeof(a) = %u\n", (unsigned)sizeof(a));
    printf("sizeof(a[0]) = %u\n", (unsigned)sizeof(a[0]));
    printf("sizeof(a[1]) = %u\n", (unsigned)sizeof(a[1]));
    printf("aの要素数は%uです\n", (unsigned)(sizeof(a) / sizeof(a[0])));
    return 0;
}