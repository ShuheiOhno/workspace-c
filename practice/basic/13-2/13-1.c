#include <stdio.h>

int main(void){
    FILE *fp;
    char fname[256];

    printf("file:");
    scanf("%s", fname);

    fp = fopen(fname, "r");

    if (fp == NULL) {
        printf("Do Not exsit this file\n");
    } else {
        printf("exist\n");
        fclose(fp);
    }
    return 0;
}