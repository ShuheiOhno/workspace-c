#include <stdio.h>

// void str_copy(char d[], const char s[]) {
//     int i = 0;
//     while((d[i] = s[i]) != '\0')
//         i++;
// }
char str_copy(char *d, const char *s) {
    char *p = d;
    while(*d++ = *s++);
    return p;
}

int main(void) {
    char str[128] = "ABC";
    char tmp[128];

    printf("文字列strは%sです\n", str);
    printf("コピーする文字列は：");
    scanf("%s", tmp);

    str_copy(str, tmp);
    printf("str:%s\n", str);
    // printf("str:%p\n", str);
    // printf("str:%s\n", *str);

    return 0;
}

