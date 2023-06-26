#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STAGE 10 //ステージ数
#define MAX_LEVEL 20 //最大文字数
#define MIN_LEVEL 3

int sleep(unsigned long x){
    clock_t c1 = clock();
    clock_t c2;
    do {
        if ((c2 = clock()) == (clock_t) - 1)
            return 0;
    } while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}

int main (void){

    int level; //文字数
    int success = 0; //正解数
    const char ltr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    srand(time(NULL));

    printf("英字記憶トレーニング\n");

    do {
        printf("挑戦するレベル(%d〜%d):", MIN_LEVEL, MAX_LEVEL);
        scanf("%d", &level);
    } while (level < MIN_LEVEL || level > MAX_LEVEL);

    printf("%d個の英字を記憶しましょう\n", level);

    time_t start = time(NULL);

    for (int stage = 0; stage < MAX_STAGE; stage++) {
        char mstr[MAX_LEVEL + 1]; //記憶すべき英字の並び
        char x[MAX_LEVEL * 2]; //読み込んだ英字の並び 多めにとっている

        //問題の文字列を作成
        for (int i = 0; i < level; i++)
            mstr[i] = ltr[rand() % strlen(ltr)];
        mstr[level] = '\0';

        printf("%s", mstr);
        fflush(stdout);
        sleep(125 * level);

        printf("\r%*s\r入力せよ:", level, "");
        fflush(stdout);
        scanf("%s", x);

        if(strcmp(x, mstr) != 0)
            printf("間違いです\a\n");
        else {
            printf("正解です\n");
            success++;
        }
    }
    time_t end = time(NULL);

    printf("%d回中%d回成功しました\n", MAX_STAGE, success);
    printf("%.1f秒でした\n", difftime(end, start));
    
    return 0;
}
