#include <stdio.h>

int main(void) {
    int i;
    int a[4];

    0[a] = a[1] = *(a + 2) = *(3 + a) = 7; //あまり使用しない方が良い（0[i]）
    for (i = 0; i < 4; i++)
        printf("a[%d]=%d\n", i, a[i]);
    return 0;
}