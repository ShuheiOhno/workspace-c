// memcpy memmove
#include <stdio.h>
#include <string.h>

int arycpy(int a[], const int b[], int n) {
    if (n <= 0)
        return 1;
    else {
        memcpy(a, b, n * sizeof(int));
        return 0;
    }
}

// a[idx]にxを挿入して以降の要素を一つずつずらす
int aryins(int a[], int n, int idx, int x) {
    if (idx < 0 || idx >= n)
        return 1;
    else {
        memmove(&a[idx + 1], &a[idx], (n - idx -1) * sizeof(int));
        a[idx] = x;
        return 0;
    }
}

#define MAX 5

int main(void) {
    int x[MAX] = {1,2,3,4,5};
    int y[MAX] = {5,5,5,5,5};
    for (int i = 0; i < MAX; i++)
        printf("[%d] :%4d%4d\n", i, x[i], y[i]);
    puts("-------------");
    arycpy(y, x, MAX);
    for (int i = 0; i < MAX; i++)
        printf("[%d] :%4d%4d\n", i, x[i], y[i]);
    puts("-------------");
    aryins(x, MAX, 2, 10); //x[2]に10を代入
    puts("        x   y");
    puts("-------------");
    for (int i = 0; i < MAX; i++)
        printf("[%d] :%4d%4d\n", i, x[i], y[i]);
    return 0;
}