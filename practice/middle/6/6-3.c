#include <time.h>
#include <stdio.h>

int main(void){
    time_t now = time(NULL);
    printf("現在の日付・時刻:%s", asctime(localtime(&now))); //時刻を文字列に変換
    return 0;
}