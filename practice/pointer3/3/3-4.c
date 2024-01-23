#include <stdio.h>

// void fill(int (*a)[3], int n, int v) {
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < v; j++)
//             a[i][j] = v;
// }

void fill(int (*a)[3], int n, int v) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++)
            (*a)[j] = v;
        a++;
    }
} 

int main(void) {
    int no;
    int x[2][3] = {0};
    int y[4][3] = {0};
    printf("全構成要素に代入する値："); scanf("%d", &no);

    fill(x, 2, no);
    fill(y, 4, no);

    puts("---x---");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
                printf("%3d", x[i][j]);
        }
        putchar('\n');
    }

    puts("---y---");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
                printf("%3d", y[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

