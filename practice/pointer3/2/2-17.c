#include <stdio.h>

int seq_search(int *a, int n, int key) {
    for (int i = 0; i < n; i++)
        if(*a++ == key)
            return i;
    return -1;
}

int main(void) {
    int key, idx;
    int x[10];
    int x_size = sizeof(x) / sizeof(x[0]);
    for (int i = 0; i < x_size; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }
    printf("探す値:"); scanf("%d", &key);
    if((idx = seq_search(x, x_size, key)) != -1)
        printf("その値をもつ要素は、x[%d]\n", idx);
    else
        printf("見つかりませんでした");
    return 0;
}