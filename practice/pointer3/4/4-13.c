#include <stdio.h>

int main(void) {
    char s[10];
    printf("文字列を入力してください:");
    scanf("%s", s);
    if(s == "ABC")
        puts("ABCと入力");
    else
        puts("ABCではない");
    return 0;
}