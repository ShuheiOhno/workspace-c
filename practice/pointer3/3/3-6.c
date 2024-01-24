#include <stdio.h>

void fill(int *a, int n1, int n2, int v) { //n1:行数、n2:列数
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            a[i * n2 + j] = v;
}

int main(void) {
    int no;
    int x[3][2]; //3行２列
    int y[4][3];
    printf("全要素に代入する値");
    scanf("%d", &no);

    fill(&x[0][0], 3, 2, no);
    fill(&y[0][0], 4, 3, no);

    puts("---x---");
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++)
            printf("%3d", x[i][j]);
        putchar('\n');
    }
    puts("---y---");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            printf("%3d", y[i][j]);
        putchar('\n');
    }
    return 0;
}