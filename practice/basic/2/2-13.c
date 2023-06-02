#include <stdio.h>

int main(void){
    double height, weight;
    printf("身長cm:"); scanf("%lf", &height);
    printf("体重kg:"); scanf("%lf", &weight);

    printf("BMI:%.2f", weight / ((height/100) * (height/100)));
    return 0;
}