#include <stdio.h>

int main(void) {
    int i;
    int a[5];
    int *p = a;

    for (i = 0; i < 5; i++)
        //ポインタp+iがa[i]を指す
        printf("&a[%d]=%p p+%d=%p p=%p\n", i, &a[i], i, p + i, p);
    return 0;
}