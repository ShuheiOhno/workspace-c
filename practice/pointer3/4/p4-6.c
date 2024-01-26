#include <stdio.h>

int str_dignum(const char *s) {
    char *p = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int count = 0;
    while(*s) {
        while (*p) {
            if(s[0] == p[0])
                count++;
            *p++;
        }
        *s++;
    }
    return count;
}

int main(void) {
    char str[128];
    printf("文字列入力:"); scanf("%s", str);
    printf("数字文字の数:%d\n", str_dignum(str));

    return 0;
}