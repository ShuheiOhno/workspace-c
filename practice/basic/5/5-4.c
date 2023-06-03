#include <stdio.h>

#define NUMBER 7

int main(void){
    int x[NUMBER];
    for (int i = 0; i < NUMBER; i++){
        x[i] = i;
    }

    for (int i = 0; i < NUMBER / 2; i++){
        int temp = x[i];
        x[i] = x[NUMBER - i -1];
        x[NUMBER - i -1] = temp;
    }

    puts("反転");
    for (int j = 0; j < NUMBER; j++){
        printf("x[%d]=%d\n", j, x[j]);
    }
    return 0;
}