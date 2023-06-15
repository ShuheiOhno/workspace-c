#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STAGE 10
#define LEVEL_MIN 3
#define LEVEL_MAX 20

int sleep(unsigned long x){
    clock_t c1 = clock(), c2;
    do {
        if ((c2 = clock()) == (clock_t) - 1)
            return 0;
    } while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}

int main(void){
    int level;
    int success = 0;

    srand(time(NULL));
    printf("数値記憶トレーニング\n");

    do {
        printf("挑戦するレベル(%d〜%d): ", LEVEL_MIN, LEVEL_MAX);
        scanf("%d", &level);
    } while(level < LEVEL_MIN || level > LEVEL_MAX);

    printf("%d桁の数値を記憶しましょう\n", level);

    time_t start = time(NULL);

    for (int stage = 0; stage < MAX_STAGE; stage++){
        char no[LEVEL_MAX + 1]; //記憶すべき数字の並び(コンピュータが生成)
        char x[LEVEL_MAX * 2]; //読み込んだ数字の並び

        no[0] = '1' + rand() % 9; //先頭文字は'1'〜'9'
        for (int i = 1; i < level; i++){
            no[i] = '0' + rand() % 10; //先頭以降は'0'〜'9'
        }
        no[level] = '\0';

        printf("%s", no);
        fflush(stdout);
        sleep(125 * level);

        printf("\r%*s\r入力せよ: ", level, "");
        scanf("%s", x);
        // printf("%s", x);
        // printf("no:%s\n", no);
        // printf("x:%s\n", x);
        // printf("%d\n", strcmp(no, x));
        // printf("%d", level);

        if(strcmp(no, x) != 0)
            printf("間違いです\n");
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