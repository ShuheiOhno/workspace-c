#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *hd[] = {"グー", "チョキ", "パー"}; //文字列の長さが異なる場合、ポインタの配列で表現した方が良い

    srand(time(NULL));

    printf("じゃんけんゲーム開始\n");

    int retry;

    do {
        int comp = rand() % 3;
        int human;

        do {
            printf("\nじゃんけんぽん ");
            for (int i = 0; i < 3; i++){
                printf(" (%d)%s", i, hd[i]);
            }
            printf(":");
            scanf("%d", &human);
        } while ( human < 0 || human > 2);

        printf("私は%sで、あなたは%sです", hd[comp], hd[human]);


        int judge = (human - comp + 3) % 3;
        switch (judge)
        {
        case 0: puts("引き分け"); break;
        case 1: puts("あなたの負け"); break;
        case 2: puts("あなたの勝ち"); break;
        default: break;
        }

        printf("もう一度しますか？ 0:いいえ  1:はい");
        scanf("%d", &retry);
    } while (retry == 1);

    return 0;
}