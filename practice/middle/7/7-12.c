//数字、英字の3文字の並びを完成させる

#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "getputch.h"

#define MAX_STAGE 5
#define swap(type, x, y) do { type t = x, x = y; y = t; } while(0)

int main(void) {
    char *qstr[] = {"0123456789",
                    "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
                    "abcdefghijklmnopqrstuvwxyz"};
    int chmax[] = {10, 26, 26}; //文字数

    init_getputch();
    srand(time(NULL));

    printf("連続する3つの数字あるいは英字から\n");
    printf("隠されている文字をタイプします\n");
    printf("例えば、A?B:と表示されたらBを\n");
    printf("4?5と表示されたら6を\n");
    printf("タイプします\n");
    printf("スペースキーで開始します\n");

    while (getch() != ' ');

    time_t start = time(NULL);

    for (int stage = 0; stage < MAX_STAGE; stage++) {
        int qtype = rand() % 3; //0:数字、1:英大文字,2:英小文字
        int nhead = rand() % (chmax[qtype] - 2); //先頭文字の添字
        int x = rand() % 3; //3文字のどれを？にするか

        putchar('\r');
        for (int i = 0; i < 3; i++) {
            if(i != 0)
                printf(" %c", qstr[qtype][nhead + 1]);
            else
                printf(" ?");
        }
        printf(" : ");
        fflush(stdout);

        int key;

        do {
            key = getch();
            if (isprint(key)) { //表示可能であるか
                putch(key); //押下されたキーを表示
                if(key != qstr[qtype][nhead + x]) //正解かどうか判定
                    putchar('\b'); //カーソルを1つ戻す
            }
        } while (key != qstr[qtype][nhead + x]);
        printf("\n");
    }

    time_t end = time(NULL);
    double jikan = difftime(end, start);
    printf("\n秒かかりました\n", jikan);

    if (jikan > 50.0)
        printf("遅い\n");
    else if (jikan > 40.0)
        printf("少し遅い\n");
    else if (jikan > 34.0)
        printf("まあまあ\n");
    else
        printf("速い\n");

    return 0;
}