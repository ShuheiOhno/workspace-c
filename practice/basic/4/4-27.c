#include <stdio.h>

int main(void){
    int len, len2;

    puts("左下が直角の二等辺三角形");
    printf("短辺:");
    scanf("%d", &len);
    puts("右下が直角の二等辺三角形");
    printf("短辺:");
    scanf("%d", &len2);

    for (int i = 1; i <= len; i++){
        for(int j = 1; j <= i; j ++){
            putchar('*');
        }
        putchar('\n');
    }

    puts("左上が直角の二等辺三角形");
    for (int i = len; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            putchar('*');
        }
        putchar('\n');
    }

    puts("右下が直角の二等辺三角形");
    for (int i = 1; i <= len2; i++){
        for(int j = 1; j <= len2 - i; j++){
            putchar(' ');
        }
        for (int j = 1; j <= i; j++){
            putchar('*');
        }
        putchar('\n');
    }

    puts("右上が直角の二等辺三角形");
    for (int i = len2; i >= 1; i--){
        for (int j = 1; j <= len2 - i; j++){
            putchar(' ');
        }
        for (int j = 1;j <= i ;j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}