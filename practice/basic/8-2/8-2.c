#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void) {
    int a, b, c, d;
    puts("input 4");
    printf("a:"); scanf("%d", &a);
    printf("b:"); scanf("%d", &b);
    printf("c:"); scanf("%d", &c);
    printf("d:"); scanf("%d", &d);

    printf("max:%d\n", max(max(a,b), max(c, d)));
    printf("max:%d\n", max(max(max(a, b), c), d));
}