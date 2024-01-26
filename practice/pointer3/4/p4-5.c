#include <stdio.h>

int str_chnum(const char *s, int c) {
    int count = 0;
    while(*s != '\0') {
        printf("%c:", s[0]);
        if(s[0] == c) {
            printf("OK\n");
            count++;
        }
        *s++;
    }
    return count;
}

int main(void) {
    char str[128];
    // char search_str;
    // int search_str; だめ
    printf("文字を入力:"); scanf("%s", str);
    // printf("検索する文字:"); scanf("%d", search_str);
    // printf("%sの中に%cは%d個含まれる\n",str ,search_str ,str_chnum(str, search_str));
    printf("\n%sの中に%cは%d個含まれる\n",str ,'a' ,str_chnum(str, 'a'));
    return 0;
}