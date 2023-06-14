#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void make4digits(int x[]){
    for(int i = 0; i < 4; i++){
        int j, val;
        do {
            val = rand() % 10;
            for (j = 0; j < i; j++){
                if(x[j] == val)
                    break;
            }
        } while(j < i);
        x[i] = val;
    }
}

int check(const char s[]){
    if(strlen(s) != 4){
        return 1;
    }
    for (int i = 0; i < 4; i++){
        if(!isdigit(s[i]))
            return 2;
        for (int j = 0; j < 4; j++)
            if (s[i] == s[j])
                return 3;
    }
    return 0;
}

void judge(const char s[], const int no[], int *hit, int *blow){
    *hit = 0;
    *blow = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (s[i] == '0' + no[j]){
                if (i == j){
                    (*hit)++;
                } else {
                    (*blow)++;
                }
            }
        }
    }
}

//判定結果を表示
void print_result(int snum, int spos){
    if (spos == 4)
        printf("正解");
    else if (snum == 0)
        printf("それらの数字は全く含まれません");
    else {
        printf("それらの数字中%d個の数字が含まれますn", snum);
        if(spos == 0)
            printf("ただし位置も合っている数字はありません\n");
        else
            printf("その中の%d個は位置も合っています\n", spos);
    }
    putchar('\n');
}

int main(void){
    srand(time(NULL));
    puts("");
    puts("");
    puts("");
    puts("");
    puts("");
}