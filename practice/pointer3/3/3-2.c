#include <stdio.h>

int main(void) {
    int i;
    int a[4][3];

    for (int i = 0; i < 4; i++)
        printf("a[%d]~%p\n", i, a[i]);
    return 0;
}