#include <stdio.h>

int main(void) {
    int a = 5, b = 3, c = 7;
    int *p[3]; //ポインタ型。ポインタが3つ入る配列
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    printf("&a=%p a=%d\n", &a, a);
    printf("&b=%p b=%d\n", &b, b);
    printf("&c=%p c=%d\n", &c, c);
    for(int i = 0; i <3; i++)
        printf("p[%d]=%p *p[%d]=%d\n", i, p[i], i, *p[i]);
    return 0;
}