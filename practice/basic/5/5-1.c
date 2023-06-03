#include <stdio.h>

int main(void){
    int a[5];
    for (int i = 0; i < 5; i ++){
        a[i] = i;
    }
    for(int j = 0; j < 5; j++){
        printf("a[%d] = %d\n", j, a[j]);
    }
    return 0;
}