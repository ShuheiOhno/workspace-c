#include <stdio.h>

int main(void){
    int a[4][3];
    int b[3][4];
    int c[4][4];

    printf("4行3列のaと3行4列のbの積をcに求める\n");
    puts("aの各要素の値を入力");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    puts("bの各要素の値を入力");
    for (int i = 0; i < 3; i ++){
        for (int j = 0; j < 4; j++){
            printf("b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
        
    }

    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            c[i][j] = 0;
            for (int k = 0; k < 3; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    puts("cの値は以下の通りです");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j ++){
            printf("c[%d][%d] = %d\n", i, j, c[i][j]);
        }
    }

    return 0;
}