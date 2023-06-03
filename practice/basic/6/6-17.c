#include <stdio.h>

double a1[5]; //全要素0.0で初期化

int main(void){
    static double a2[5]; //全要素0.0で初期化

    for (int i = 0; i < 5; i++){
        printf("a1[%d] = %.1f\n", i, a1[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("a2[%d] = %.1f\n", i, a2[i]);
    }
    return 0;
}