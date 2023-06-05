#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("この処理系では0〜%dの乱数が生成できます\n", RAND_MAX); //rand関数が生成する乱数の最大値
    int retry;
    do {
        printf("\n乱数%dを生成しました\n", rand()); //0〜RAND_MAXの乱数を生成して返却
        printf("もう一度？・・・(0)いいえ (1)はい");
        scanf("%d", &retry);
    } while(retry == 1);

    return 0;
}