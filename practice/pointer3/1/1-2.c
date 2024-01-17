#include <stdio.h>

int main(void) {
    int n;
    int *ptr; //ポインタ

    n = 57;
    ptr = &n; // ptrにnのアドレスを代入

    printf("nの値=%d\n", n);
    printf("&nの値=%p\n", &n);
    printf("ptrの値=%p\n", ptr);

    return 0;
}