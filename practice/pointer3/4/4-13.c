#include <stdio.h>

int main(void) {
    char s[10];
    printf("文字列を入力してください:");
    scanf("%s", s);
    if(s == "ABC") //sの先頭文字と"ABC"の先頭文字のアドレスが等しいか。判定は成立しない
        puts("ABCと入力");
    else
        puts("ABCではない");
    return 0;
}