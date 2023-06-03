#include <stdio.h>

//文字列を空文字にする関数
void null_string(char s[]){
    s[0] = '\0';
}

int main(void){
    char str[128];
    printf("文字列を入力:");
    scanf("%s", str); //strは配列のため、&が不要

    printf("文字列strは\"%s\"です\n", str);
    null_string(str);
    printf("文字列strは\"%s\"になりました", str);

    return 0;
}