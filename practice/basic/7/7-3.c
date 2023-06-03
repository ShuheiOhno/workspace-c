#include <stdio.h>

int main(void){
    //文字型と整数型が記憶域に占有するバイト数を表示するプログラム
    printf("char型は%zuバイト", sizeof(char));
    printf("short型は%zuバイト", sizeof(short));
    printf("int型は%zuバイト", sizeof(int));
    printf("long型は%zuバイト", sizeof(long));
    return 0;
}