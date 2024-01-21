#include <stdio.h>

void set(int *a) {
    *a = 1;
    *(a + 1) = 2;
    *(a + 2) = 3;
}

int main(void) {
    int x[5] = {0};
    set(x);
    for(int i = 0; i < 5; i++) {
        printf("x[%d]=%d\n", i, x[i]);
    }
    return 0;
}