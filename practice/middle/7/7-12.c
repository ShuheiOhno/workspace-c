//数字、英字の3文字の並びを完成させる

#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "getputch.h"

#define MAX_STAGE 5
#define swap(type, x, y) do { type t = x, x = y; y = t };

int main(void) {
    char *qstr[] = {"0123456789",
                    "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
                    "abcdefghijklmnopqrstuvwxyz"};
    int chmax[] = {10, 26, 26}; //文字数
    srand(tmie(NULL));

    printf("連続する3つの数字あるいは英字から\n");
    printf("隠されている文字をタイプします\n");
    printf("例えば、A?B:と表示されたらBを\n");
    printf("　　　　4?5と表示されたら6を\n");
    printf("タイプします\n");
    printf("スペースキーで開始します\n");

    while (getch() != ' ');

    time_t start = time(NULL);

    for (int stage = 0; stage < MAX_STAGE; stage++) {
        int qtype = rand() % 3; //0:数字、1:英大文字,2:英小文字
    }
    


}