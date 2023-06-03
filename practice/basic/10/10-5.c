#include <stdio.h>

int main(void){
    int a[5] = {11, 22, 33, 44, 55};
    int *p = a; //pはaを指す

    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d *(a+%d) = %d p[%d] = %d *(p+%d) = %d\n",
        i, a[i], i, *(a + i), i, p[i], i, *(p + i));
    }

    for (int i = 0; i < 5; i++){
        printf("&a[%d] = %p a+%d = %p &p[%d] = %p p+%d = %p\n",
        i, &a[i], i, (a + i), i, &p[i], i, (p + i));
    }
    return 0;
}