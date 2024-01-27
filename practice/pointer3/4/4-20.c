#include <stdio.h>

void swap(char **x, char **y) { //ポインタのポインタを入れ替えるので、**
    char **temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    char *s1 = "ABC";
    char *s2 = "DEF";

    printf("文字列s1は%sです\n", s1);
    printf("文字列s2は%sです\n", s2);

    swap(&s1, &s2); //先頭のポインタのポインタ

    puts("ポインタs1とs2を交換");

    printf("文字列s1:%s\n", s1);
    printf("文字列s2:%s\n", s2);
}