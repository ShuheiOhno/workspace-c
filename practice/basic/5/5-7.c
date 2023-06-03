#include <stdio.h>

#define NUMBER 120

int main(void){
    int num;
    int score[NUMBER];
    int bunpu[11] = {0};

    printf("人数を入力");
    do {
        scanf("%d", &num);
        if(num < 1 || num > NUMBER){
            printf("1から%dで入力してください", NUMBER);
        }
    } while (num < 1 || num > NUMBER);

    printf("%d人の点数を入力\n", num);
    for (int i = 0; i < num ; i++){
        printf("%2d番:", i + 1);
        do {
            scanf("%d", &score[i]);
            if (score[i] > 100 || score[i] < 0){
                printf("1-100で入力してください");
            }
        } while (score[i] > 100 || score[i] < 0);
        bunpu[score[i] / 10]++;
    }

    puts("分布グラフ\n");
    for (int i = 0; i <= 9; i++){
        printf("%3d〜%3d:", i * 10, i * 10 + 9);
        for(int j = 0; j < bunpu[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }
    printf("     100:");
    for (int j = 0; j < bunpu[10]; j ++){
        putchar('*');
    }
    putchar('\n');

    printf("\n横向き\n");
    int bunpu_max = 0; //分布の個数の最大値 縦の処理の回数を調べるため
    for (int i = 0; i <= 10; i++){
        if (bunpu[i] > bunpu_max){
            bunpu_max = bunpu[i];
        }
    }
    for (int i = bunpu_max; i >= 1; i--){
        for (int j = 0; j <= 10; j++){
            if(bunpu[j] >= i){
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        putchar('\n');
    }
    for (int i = 0; i < 34; i++){
        putchar('-');
    }
    putchar('\n');
    for (int i = 0; i <= 10; i++){
        printf("%2d ", i * 10);
    }
    putchar('\n');
    return 0;
}