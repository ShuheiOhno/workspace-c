#include <stdio.h>

int main(void) {
    int x = 56;
    int *p = &x;
    printf("%d\n", 5**p);
    printf("*p= %d\n", *p);
    printf("p= %p\n", p);
    printf("&x= %p\n", &x);
    printf("*(&x)= %p\n", *(&x)); //0x38は10進数で56
    printf("&(*p)= %p\n", &(*p));
    return 0;
}