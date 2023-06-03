#include <stdio.h>

int main(void){
    int side1, side2, height, width;
    printf("一辺");
    scanf("%d", &side1);
    printf("一辺");
    scanf("%d", &side2);

    if(side1 > side2){
        height = side2;
        width = side1;
    }else {
        height = side1;
        width = side2;
    }

    for (int i = 1; i <= height; i++){
        for(int j = 1; j <= width; j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}