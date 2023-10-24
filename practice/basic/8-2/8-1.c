// マクロ
#include <stdio.h>

#define diff(x, y) ((x) > (y)) ? ((x) - (y)) : ((y) - (x))

int main(void) {
    int a, b;
    puts("input");
    printf("a:"); scanf("%d", &a);
    printf("b:"); scanf("%d", &b);
    printf("%d\n", diff(a, b));
    return 0;
}