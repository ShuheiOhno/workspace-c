#include <stdio.h>

int main(void) {
    int n;
    long k;
    char s[20];

    printf("整数nを入力せよ:");
    scanf("%d", n);
    printf("整数kを入力せよ:");
    scanf("%ld", k);
    printf("文字列sを入力せよ:");
    scanf("%s", s);

    printf("n:%d\n", n);
    printf("l:%ld\n", k);
    printf("s:%s\n", s);
    return 0;

}