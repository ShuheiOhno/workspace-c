#include <stdio.h>

void set(int a[]){
    a[0]=1;
    a[1]=2;
    a[2]=3;
}

int main(void) {
    int a[5] = {0};

    set(a);
    for(int i = 0; i < 4; i++){
        printf("a[%d]=%d\n", i, a[i]);
    }
    return 0;
}