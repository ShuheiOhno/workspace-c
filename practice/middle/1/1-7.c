#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    const int max_stage = 10; //最大入力回数
    int remain = max_stage; //max_stageは直接書き換えられないため、この変数を用意

    int ans = rand() % 1000;
    int no;

    printf("0〜999の整数を当てよう\n\n");

    do {
        printf("残り%d回\n", remain);
        scanf("%d", &no);
        if (no < ans){
            printf("もっと大きい\n");
        } else if (no > ans){
            printf("もっと小さい\n");
        }
        remain--;
    } while(remain > 0 && no != ans);

    if(no != ans){
        printf("残念。正解は%d\n", ans);
    } else {
        printf("正解\n");
        printf("%d回で当たりました\n",max_stage - remain);
    }

    return 0;
}