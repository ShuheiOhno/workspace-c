#include <stdio.h>

int str_chnum(const char *s, char c) {
    int count = 0;
    while(*s) {
        *s++;
        if(s[0] == c)
            count++;
    }
    return count;
}

int main(void) {
    char str[128];
    char search_str;
    printf("文字を入力:"); scanf("%s", str);
    printf("検索する文字:"); scanf("%s", search_str);
    printf("%sの中に%sは%d個含まれる\n",str ,search_str ,str_chnum(str, search_str));
    return 0;
}