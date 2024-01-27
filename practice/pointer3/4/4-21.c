#include <stdio.h>

size_t strlen1(const char *s) {
    size_t len = 0;
    while(*s++)
        len++;
    return len;
}

size_t strlen2(const char *s) {
    const char *p = s;
    while (*s)
        s++;
    return s - p;
}

int main(void) {
    printf("strlen1:%zu\n",strlen1("abcabc"));
    printf("strlen2:%zu\n",strlen2("abcabc000"));
    return 0;
}