#include <stdio.h>

int main(void){
    FILE *fp;
    char fname[256];

    printf("ファイル名:");
    scanf("%s", fname);

    fp = fopen(fname, "r");
    if (fp == NULL){
        printf("ファイルが存在しません\n");
    } else {
        printf("ファイルが存在します\n");
        fclose(fp);
    }
    return 0;
}