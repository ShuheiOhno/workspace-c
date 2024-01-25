#include <stdio.h>

int main(void) {
    char s[] = "ABC";
    char *p = "123";
    printf("s=\"%s\"\n", s);
    printf("p=\"%s\"\n", p);

    // s = "DEF"; //エラー
    p = "987";

    printf("s=\"%s\"\n", s);
    printf("p=\"%s\"\n", p);
    return 0;
}