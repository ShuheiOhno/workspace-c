//最大3ヶ月分を横に並べたカレンダー
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//各月の日数
int mday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//year年month月day日の曜日を求める
int dayofweek(int year, int month, int day){
    if (month == 1 || month == 2){
        year--;
        month += 12;
    }
    return (year + year/4 - year/100 + year/400 + (13*month+8)/5 + day) % 7;
}

//year年は閏年か？(0:平年、1:閏年)
int is_leap(int year){
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

//year年month月の日数(28〜31)
int monthdays(int year, int month){
    if (month-- != 2)
        return mday[month]; //monthが2月でない時
    return mday[month] + is_leap(year); //monthが2月である時
}