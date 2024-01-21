#include <stdio.h>

void fullzero(int a[], int n) {
    for (int i = 0; i < n; i++)
        a[i] = 0;
}

int main(void) {
    int x[5] = {1,2,3,4,5};
    int x_size = sizeof(x) / sizeof(x[0]);
    fullzero(x, x_size);
    for(int i = 0; i < x_size; i++)
        printf("x[%d]=%d\n", i, x[i]);
    return 0;
}