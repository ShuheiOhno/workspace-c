#include <stdio.h>

int main(void){
    int a[5];

    printf("a:%p\n", a);
    printf("a[0]:%p\n", &a[0]);

    if(a == &a[0]){
        puts("a=a[0]");
    } else {
        puts("a!=a[0]");
    }
    return 0;
}