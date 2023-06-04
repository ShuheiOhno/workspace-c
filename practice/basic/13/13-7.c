#include <stdio.h>

int main(void){
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名:");
    scanf("%s", fname);

    if((fp = fopen(fname, "r")) == NULL){
        printf("ファイルを開けません");
    } else {
        int ch;
        int cnt[10] = {0};

        while ((ch = fgetc(fp)) != EOF){
            if (ch >= '0' && ch <= '9'){
                cnt[ch - '0']++;
            }
        }
        fclose(fp);

        puts("数字文字の出現回数");
        for (int i = 0; i < 10; i++){
            printf("'%d': %d\n", i, cnt[i]);
        }
    }
}