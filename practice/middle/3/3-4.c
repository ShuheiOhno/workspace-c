#include <ctype.h>
#include <stdio.h>
#include <limits.h>

//文字列内のバイトを文字と16進数と2進数で表示
void strdump(const char *s){
    unsigned char x = (unsigned char) *s;
    printf("%d" ,CHAR_BIT);
    printf("%c ", isprint(x) ? x: ' '); //文字
    printf("%0*X ", (CHAR_BIT + 3) / 4, x); //16進数
    for (int i = CHAR_BIT - 1; i >= 0; i--){ //2進数
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
    putchar('\n');
    s++;
}

int main(void){
    puts("漢字"); strdump("漢字"); putchar('\n');
    puts("12日本語AB"); strdump("12日本語AB"); putchar('\n');
    
    return 0;
}