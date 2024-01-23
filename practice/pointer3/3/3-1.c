#include <stdio.h>

int main(void) {
    int i, j;
    int a[2][3] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
            printf("a[%d][%d] = %p\n", i, j, &a[i][j]);
        }
    }
    return 0;
}