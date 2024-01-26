    #include <stdio.h>

    int str_dignum(const char *s) {
        // char *p = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        char * p = "0123456789";
        int count = 0;
        while(*s) {
            p = "0123456789"; //初期化
            while (*p) {
                // printf("%c=%c\n",s[0], p[0]);
                if(s[0] == p[0]) {
                    // printf("%c", p[0]);
                    count++;
                }
                p++;
            }
            // putchar('u');
            s++;
            // printf("*s:%c\n", s[0]);
        }
        return count;
    }

    int main(void) {
        char str[128];
        printf("文字列入力:"); scanf("%s", str);
        printf("数字文字の数:%d\n", str_dignum(str));

        return 0;
    }