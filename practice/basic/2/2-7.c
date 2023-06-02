#include <stdio.h>

int main(void){

    double r;
    printf("半径：");
    scanf("%lf", &r);
    printf("円の面積は、%f\n", 3.14 * r * r);
    return 0;
}
