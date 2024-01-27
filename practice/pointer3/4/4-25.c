#include <stdio.h>

char *strcpy1(char *s1, const char *s2) {
    char *p = s1;
    while (*s1++ = *s2++)
        ;
    return p;
}

char *strncpy1(char *s1, const char *s2, size_t n) {
    char *p = s1;
    while(n) {
        n--;
        if (!(*s1++ = *s2++)) break; // \0を見つけたら終了
    }
    while(n--)
        *s1++ = '\0'; //残りを\nで埋める
    return p;
}

int main(void) {
    // char *a = "aaa";
    // char *b = "bbb000";
    char a[4] = "aaa";
    char b[7] = "bbb000";
    printf("aaa→abc: %s\n",strcpy1(a, "abc"));
    printf("bbb000→uuu: %s\n",strncpy1(b, "uuu", 6));

    return 0;
}