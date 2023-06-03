#include <stdio.h>

void put_string(const char *s){
    while (*s)
    {
        putchar(*s++);
    }
}

int str_chnum(const char *s, int c){
    int count = 0;

    while (*s){
        if (*s++ == c){
            count++;
        }
    }
    return count;
}

int main(void){
    char str[256];
    char ch[10];

    printf("文字列を入力:");
    scanf("%s", str);

    put_string(str);
    printf("からカウントする文字:"); //最初の1文字だけカウント
    scanf("%s", ch);

    printf("その文字は%d個含まれています\n", str_chnum(str, ch[0]));

    return 0;
}