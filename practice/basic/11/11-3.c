#include <stdio.h>

int str_chr(const char *s, int ch){
    int idx = 0;
    while (*s)
    {
        if(*s++ == ch){
            return idx;
        }
        idx++;
    }
    return -1;
}

int main(void){
    int idx;
    char str[256];
    char ch[10];

    printf("文字列を入力:");
    scanf("%s", str);
    printf("検索する文字列を入力");
    scanf("%s", ch);

    idx = str_chr(str, ch[0]);
    if(idx == -1)
        printf("その文字は含まれていません\n");
    else
        printf("その文字(%c)は%d文字目に入っています\n", str[idx], idx + 1);
    return 0;
}