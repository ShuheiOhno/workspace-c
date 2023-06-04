#include <stdio.h>

int ferase(const char *filename){
    FILE *fp;
    // fp = fopen(filename, "w");
    if((fopen(filename, "w")) == NULL){
        return 0;
    }
    fclose(fp);
    return 1;
}

int main(void){
    FILE *fp;
    char fname[256];

    printf("中身を消去するファイル名:");
    scanf("%s", fname);

    if(ferase(fname))
        printf("そのファイルの中身を消去しました\n");
    else
        printf("そのファイルの中身を消去できませんでした\n");
    return 0;
}