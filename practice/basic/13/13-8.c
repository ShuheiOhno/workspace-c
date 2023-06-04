#include <stdio.h>

//ファイルの中身をコピー
int main(void){
    FILE *sfp; //コピー元のファイル
    FILE *dfp;
    char sname[FILENAME_MAX]; //コピー元のファイル名
    char dname[FILENAME_MAX];

    printf("コピー元ファイル名:"); scanf("%s", sname);
    printf("コピー先ファイル名:"); scanf("%s", dname);

    if((sfp = fopen(sname, "r")) == NULL){
        printf("コピー元ファイルを開けません");
    } else {
        if((dfp = fopen(dname, "w")) == NULL){
            printf("コピー先ファイルを開けません");
        } else {
            int ch;
            while ((ch = fgetc(sfp)) != EOF)
            {
                putchar(ch); //画面出力
                fputc(ch, dfp); //ファイルに出力
            }
            fclose(dfp);
        }
        fclose(sfp);
    }

    return 0;
}