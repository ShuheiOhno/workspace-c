#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));

    int a = 100 + rand() % 900; //加算する数値（1〜999の乱数)
    int b = 100 + rand() % 900; //加算する数値（1〜999の乱数)
    int c = 100 + rand() % 900; //加算する数値（1〜999の乱数)

    printf("%d + %d + %d =? :", a, b, c);

    clock_t start = clock(); //計測開始

    while (1)
    {
        int x;
        scanf("%d", &x);
        if(x == (a + b + c)){
            break;
        }
        printf("違います。再入力してください:");
    }

    clock_t end = clock();

    double req_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("%.1f秒かかりました\n", req_time); //うまくいかない。CLOCKS_PER_SECが大きすぎて、値が0になってしまう
    printf("start:%.1lu\n", start);
    printf("end:%.1lu\n", end);
    printf("処理に要したクロック数:%.1lu\n", end - start);
    printf("CLOCKS_PER_SEC:%.1lu\n", CLOCKS_PER_SEC);

    if(req_time > 30.0){
        printf("時間がかかりすぎですね\n");
    } else if (req_time > 17.0) {
        printf("まあまあですね\n");
    } else {
        printf("早いですね\n");
    }

    return 0;
}