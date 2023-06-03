#include <stdio.h>

void adjust_point(int *n){
    if (*n < 0) *n = 0;
    if (*n > 100) *n = 100;
}
void adjust_point2(int n){
    if (n < 0) n = 0;
    if (n > 100) n = 100;
}

int main(void){
    int point;
    printf("テストの点数");
    scanf("%d", &point);

    adjust_point2(point);
    printf("点数は%d点です\n", point);
    adjust_point(&point);
    printf("点数は%d点です\n", point);
    return 0;

}