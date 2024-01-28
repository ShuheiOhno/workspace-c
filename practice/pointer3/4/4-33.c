// strcmp strncmp 比較 等しいならば0 左の引数>右の引数＋ 他-
#include <stdio.h>
#include <string.h>

int main(void) {
    char st[128];
    puts("ABCDEとの比較をします");
    puts("XXXXXで終了します");

    while(1) {
        printf("\n文字列st: ");
        scanf("s", st);

        if(strcmp(st, "XXXXX") == 0)
            break;
        printf("strcmp(\"ABCDE\", st) = %d\n", strcmp("ABCDE", st));
        printf("strncmp(\"ABCDE\", st, 3) = %d\n", strcmp("ABCDE", st, 3));
    }

    return 0;
}