#include <stdio.h>

//閏年の判定
int is_leap(int y){
    return y % 4 == 0 && y % 100 != 0 || y % 400 == 0; 
}

//y年m月の日数
int days_of_month(int y, int m){
    int mdays[][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},//閏年
    };
    return mdays[is_leap(y)][m - 1];
}

//y年m月d日を前日の日付に更新
void decrement_date(int *y, int *m, int *d){
    if(*d > 1){
        --*d;
    } else {
        if(--*m < 1){
            --*y;
            *m = 12;
        }
        *d = days_of_month(*y, *m);
    }
}

//y年m月d日を翌日の日付に更新
void increment_date(int *y, int *m, int *d){
    if(*d < days_of_month(*y, *m)){
        ++*d;
    } else {
        if (++*m > 12){
            ++*y;
            *m = 1;
        }
        *d = 1;
    }
}

int main(void){
    int n;
    int y, m, d;

    puts("日付を入力");
    printf("年:"); scanf("%d", &y);
    printf("月:"); scanf("%d", &m);
    printf("日:"); scanf("%d", &d);

    printf("何日戻しますか:"); scanf("%d", &n);
    for (int i = 0; i < n; i++){
        decrement_date(&y, &m, &d);
    }
    printf("%d年%d月%d日になりました\n", y, m, d);

    printf("何日進めますか:"); scanf("%d", &n);
    for (int i = 0; i < n; i++){
        increment_date(&y, &m, &d);
    }
    printf("%d年%d月%d日になりました\n", y, m, d);


    return 0;
}