#include <stdio.h>

// bをaにコピー。要素数はn
void ary_cpy(int a[], const int b[], int n) {
    for (int i = 0; i < n; i++) {
        *a = b;
    }
}

int main(void) {
    int x[5] = {1,2,3,4,5};
    int y[5] = {11,12,13,14,15};
    int size = sizeof(x) / sizeof(x[0]);

    ary_cpy(x, y, size);

    for (int i = 0; i < size; i++)
        printf("x[%d]=%d", i, x[i]);
    for (int i = 0; i < size; i++)
        printf("y[%d]=%d", i, y[i]);
    return 0;
}