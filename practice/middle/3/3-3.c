#include <ctype.h>
#include <stdio.h>
#include <limits.h>

int main(void){
    //全ての文字と16進数の文字コードを表示
    for (int i = 1; i <= CHAR_MAX; i++){
        switch(i){
            case '\a' : printf("\\a"); break;
            case '\b' : printf("\\b"); break;
            case '\f' : printf("\\f"); break;
            case '\n' : printf("\\n"); break;
            case '\r' : printf("\\r"); break;
            case '\t' : printf("\\t"); break;
            case '\v' : printf("\\v"); break;
            default : printf(" %c", isprint(i) ? i : ' '); //isprint 表示可能なら0以外、不可能なら0を返す関数
        } 
        printf(" %02x\n", i);
    }
    return 0;
}