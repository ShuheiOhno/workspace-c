#include <stdio.h>

int str_len(const char s[]) {
    int len = 0;
    while(s[len] != '\0')
        len++;
    return len;
}

int str_len2(const char s[]) {
    const char *p = s;
    while(*s)
        s++;
    //同じ配列ないの要素へのポインタ同士を減算すると、それらのポインタの指す要素が、何要素分だけ離れているかが得られる
    return s - p;
}

int main(void) {
    char str[128];
    printf("文字列を入力してください:");
    scanf("%s", str);
    printf("文字列%sの長さは、%d\n", str, str_len(str));
    printf("str2:文字列%sの長さは、%d\n", str, str_len2(str));
    return 0;
}