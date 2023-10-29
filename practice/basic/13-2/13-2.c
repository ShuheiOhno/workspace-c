#include <stdio.h>

//名前がfinenameであるファイルの中身を消去
int ferase(const char *filename){
    FILE *fp;
    if((fp = fopen(filename, "w")) == NULL)
        return 0;
    fclose(fp);
    return 1;
}

int main(void) {
    FILE *fp;
    char fname[256];

    printf("delete file:");
    scanf("%s", fname);

    if(ferase(fname))
        printf("delete\n");
    else
        printf("Can't delete");
    return 0;
}