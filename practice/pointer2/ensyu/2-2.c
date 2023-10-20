#include <stdio.h>

void ary_cpy(int a[], const int b[], int n){
    while (n-- > 0)
        *a++ = *b++;
    //別解
    // for (int i = 0; i < n; i++) {
    //     a[i] = b[i];
    // }
}

int main(void){
    int a[5] = {0};
    int b[5] = {1,2,3,4,5};
    int arrayCount = sizeof(a) / sizeof(a[0]);

    ary_cpy(a, b, arrayCount);

    for(int i = 0; i < arrayCount; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}