#include <stdio.h>

int main(void) {
    int sw;
    int n1 = 15;
    int n2 = 73;
    int *p;

    printf("n1は%dでn2は%dです\n", n1, n2);
    printf("どっちを変更（n1: 1 /n2: 2）: ");
    scanf("%d", &sw);

    if(sw == 1) p = &n1;
    if(sw == 2) p = &n2;
    *p = 99;

    printf("n1は%dでn2は%dです\n", n1, n2);
    return 0;
}