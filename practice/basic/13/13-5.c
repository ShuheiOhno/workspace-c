#include <stdio.h>
#include <time.h>

char data_file[] = "test5.txt";

//前回の日付時刻、気分を取得
void get_data(void){
    FILE * fp;
    if((fp = fopen(data_file, "r")) == NULL){
        printf("本プログラムを実行するのは初めてですね");
    }else {
        int year, month, day, h, m, s;
        char kibun[2048];

        fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
        fscanf(fp, "%s", kibun);
        printf("前回は%d年%d月%d日%d時%d分%d秒で、気分は%sでした",
                year, month, day, h, m, s, kibun);
        fclose(fp);
    }
}

//今回の日付時刻、気分を取得
void put_data(const char *kibun){
    FILE *fp;
    if((fp = fopen(data_file, "w")) == NULL){
        printf("ファイルを開けません");
    } else {
        time_t current = time(NULL);
        struct tm *timer = localtime(&current);
        fprintf(fp, "%d %d %d %d %d %d\n",
                timer->tm_year + 1900,
                timer->tm_mon,
                timer->tm_mday,
                timer->tm_hour,
                timer->tm_min,
                timer->tm_sec);
        fprintf(fp, "%s\n", kibun);
        fclose(fp);
    }
}

int main(void){

    char kibun[2048];
    get_data();

    printf("現在の気分は;");
    scanf("%s", kibun);
    put_data(kibun);
    return 0;
}


