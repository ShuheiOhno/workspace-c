#include <stdio.h>

int main(void) {
    int n;
    int *p;

    printf("int 型は%uバイトです\n", (unsigned)sizeof(int));
    printf("int *型は%uバイトです\n", (unsigned)sizeof(int *));

    printf("nは%uバイトです\n", (unsigned)sizeof(n));
    printf("*pは%uバイトです\n", (unsigned)sizeof(*p));
    printf("pは%uバイトです\n", (unsigned)sizeof(p));
    printf("&nは%uバイトです\n", (unsigned)sizeof(&n));

    return 0;
}
