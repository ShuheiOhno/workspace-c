#include <stdio.h>

int main(void){
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名:");
    scanf("%s", fname);

    if((fp = fopen(fname, "r")) == NULL){
        printf("ファイルをオープンできません");
    } else {
        int ch;
        int counter = 0;
        while((ch = fgetc(fp)) != EOF){ //fgetc() 引数で指定されたストリームから１個の文字列を読み込む関数
            if (ch == '\n'){
                counter++;
            }
        }
        fclose(fp);
        printf("そのファイルは%d行です\n", counter);
    }
    return 0;
}