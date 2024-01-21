#include <stdio.h>

int main(void) {
    int a[5];
    printf("aの要素数:%d\n", (unsigned)(sizeof(a) / sizeof(a[0])));
    return 0;
}