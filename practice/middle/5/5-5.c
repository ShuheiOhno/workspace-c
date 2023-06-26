#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE 5
#define MIN_LEVEL 2
#define MAX_LEVEL 5

int sleep(unsigned long x){
    clock_t c1 = clock();
    clock_t c2;
    do {
        if ((c2 = clock()) == (clock_t) - 1)
            return 0;
    } while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}

int main(void){
    int level;
    int total_success = 0;
    int score[MAX_STAGE];

    srand(time(NULL));

    printf("プラスワントレーニング開始\n");
    printf("2桁の数値を記憶します\n");
    printf("1を加えた値を入力してください\n");

    do {
        printf("挑戦するレベル(%d〜%d):", MIN_LEVEL, MAX_LEVEL);
        scanf("%d", &level);
    } while(level < MIN_LEVEL || level > MAX_LEVEL);

    time_t start = time(NULL);

    for(int stage = 0; stage < MAX_STAGE; stage++){
        int no[MAX_LEVEL]; //記憶する数
        int x[MAX_LEVEL]; //読み込んだ数
        int success = 0; //このステージでの正解数

        printf("\n第%dステージ開始\n",stage + 1);
        //levelの数だけ10〜99の乱数を生成して表示する
        for (int i = 0; i < level; i++){
            no[i] = rand() % 90 + 10;
            printf("%d  ", no[i]);
        }
        fflush(stdout);
        sleep(300 * level);
        printf("\r%*s\r",3 * level, ""); //問題を消す
        fflush(stdout);

        //解答を読み込む
        for (int i = 0; i < level; i++){
            printf("%d番目の数:", i + 1);
            scanf("%d", &x[i]);
        }

        for (int i = 0; i < level; i++){
            if(x[i] != no[i] + 1)
                printf("× ");
            else{
                printf("⚪︎ ");
                success++;
            }
        }
        putchar('\n');

        for (int i = 0; i < level; i++) //正解を表示
            printf("%2d", no[i]);

        printf("...%d個正解です\n", success);
        score[stage] = success;
        total_success += success;
    }
    time_t end = time(NULL);
    printf("%d個中%d個正解しました\n", level * MAX_STAGE, total_success);

    for (int stage = 0; stage < MAX_STAGE; stage++){
        printf("第%2dステージ:%d\n", stage + 1, score[stage]);
    }
    printf("%.1f秒でした\n", difftime(end, start));


    return 0;
}