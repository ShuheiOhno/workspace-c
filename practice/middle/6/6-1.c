#include <time.h>
#include <stdio.h>

void put_date(const struct tm *timer){
    char *wday_name[] = {"日", "月", "火", "水", "木", "金", "土"};

    printf("%4d年%02d月%02d日(%s)%02d時%02d分%02d秒",
            timer->tm_year + 1900, //年
            timer->tm_mon + 1, //月
            timer->tm_mday, //日
            wday_name[timer->tm_wday], //曜日
            timer->tm_hour, //時
            timer->tm_min, //分
            timer->tm_sec //秒
            );
}

int main(void){
    time_t now = time(NULL); //暦時刻（現在の暦時刻）
    struct tm *current = localtime(&now);

    printf("現在の日付・時刻");
    put_date(current);
    
    return 0;
}

