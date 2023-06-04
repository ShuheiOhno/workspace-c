#include <stdio.h>

void set123(int a[]){
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
}

int main(void){
    int i;
    int x[5] = {0};
    set123(x);
    for (i = 0; i < 5; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }
    return 0;
}