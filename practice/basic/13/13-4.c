#include <stdio.h>
#include <string.h>

#define NAME_LEN 100

int main(void){
    FILE *fp;

    if((fp = fopen("test2.txt", "w")) == NULL){
        printf("ファイルを開けません\n");
    } else {
        char name[NAME_LEN];
        double height;
        double weight;

        for (int i = 0; ; i++){
            int flag;
            printf("%d人目のデータを入力しますか: (はい-1/終了-0)\n", i + 1);
            scanf("%d", &flag);
            if (flag == 0) break;
            printf("名前:"); scanf("%s", name);
            printf("身長:"); scanf("%lf", &height);
            printf("体重:"); scanf("%lf", &weight);
            fprintf(fp, "%s %f %f\n", name, height, weight);
        }
        fclose(fp);
    }
    return 0;
}