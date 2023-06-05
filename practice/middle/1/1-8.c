#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE 10

int main(void){
    srand(time(NULL));

    int ans = rand() % 1000;
    int no;

    int num[MAX_STAGE]; //読み込んだ値の履歴
    int stage = 0; //入力した回数

    printf("0〜999の整数を当てよう\n\n");

    do {
        printf("残り%d回\n", MAX_STAGE - stage);
        scanf("%d", &no);
        num[stage++] = no;
        if (no < ans){
            printf("もっと大きい\n");
        } else if (no > ans){
            printf("もっと小さい\n");
        }
    } while(MAX_STAGE > stage && no != ans);

    if(no != ans){
        printf("残念。正解は%d\n", ans);
    } else {
        printf("正解\n");
        printf("%d回で当たりました\n", stage);
    }

    puts("\n---------入力履歴-------------");
    for (int i = 0; i < stage; i++){
        printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);
    }

    return 0;
}