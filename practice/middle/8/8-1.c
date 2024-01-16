#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include "getputch.h"

int main(void){
    char *str = "How do you do?";
    int len = strlen(str);
    init_getputch();

    printf("このとおりタイプする\n");
    printf("%s\n", str);
    fflush(stdout);

    time_t start = time(NULL);

    for (int i = 0; i < len; i++) {
        int ch;
        do {
            ch = getch(); //キー読み込み
            if (isprint(ch)) {
                putch(ch);
                if (ch != str[i])
                    putch('\b'); //違うキーが押されたら、カーソルを一つ戻す
            }
        } while (ch != str[i]);
    }

    time_t end = time(NULL);
    printf("\n%.1f秒でした\n", difftime(end, start));
    term_getputch();

    return 0;
}