//警報を発する書式つき出力関数
#include <stdio.h>
#include <stdarg.h>

int aleart_printf(const char *format, ...){
    va_list ap;
    putchar('\a');
    va_start(ap, format);
    int count = vprintf(format, ap); //可変個引数の処理をvprintfに一任 vprintfの引数は可変個引数を取るが、この関数の引数自体が可変個ではない
    va_end(ap);
    return count;
}

int main(void){
    aleart_printf("Hello\n");
    aleart_printf("%d %ld %.2f\n", 2, 3L, 3.14);
    return 0;
}