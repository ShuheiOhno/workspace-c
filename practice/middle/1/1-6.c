#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL)); //現在の時刻に基づいて乱数の種を設定
    int ans = rand() % 1000; //0〜999の乱数を生成
    int no;

    printf("数字を当てよう\n");
    do {
        printf("いくつでしょう");
        scanf("%d", &no);
        if(no > ans){
            printf("もっと小さい");
        } else if (no < ans){
            printf("もっと大きい");
        }
    } while(no != ans);
    printf("正解\n");

    return 0;
}