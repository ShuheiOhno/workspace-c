#include <stdio.h>
#include <string.h>

#define NINZU_MAX 50
#define NAME_LEN 100

int main(void){
    FILE *fp;
    if((fp = fopen("test1.dat", "r")) == NULL){
        printf("ファイルを開けません\n");
    } else {
        int ninzu = 0;
        char name[NAME_LEN][NINZU_MAX];
        double height[NINZU_MAX];
        double weight[NINZU_MAX];
        double hsum = 0.0;
        double wsum = 0.0;

        for (int i = 0; i < NINZU_MAX; i++){
            if(fscanf(fp, "%s%lf%lf", name[ninzu], &height[ninzu], &weight[ninzu]) != 3)
                break;
            hsum += height[ninzu];
            wsum += weight[ninzu];
            ninzu++;
        }
        for (int i = 0; i < ninzu - 1; i++){//昇順にソート
            for(int j = ninzu - 1; j > i; j--){
                if(height[j - 1] > height[j]){
                    char tn[NAME_LEN];
                    double td;
                    strcpy(tn, name[j]);
                    strcpy(name[j], name[j - 1]);
                    strcpy(name[j - 1], tn);
                    td = height[j];
                    height[j] = height[j - 1];
                    height[j - 1] = td;
                    td = weight[j];
                    weight[j] = weight[j - 1];
                    weight[j - 1] = td;
                }
            }
        }
        for (int i = 0; i < ninzu; i++){
            printf("%-10s %5.1f %5.1f\n", name[i], height[i], weight[i]);
        }
        printf("-----------------------------\n");
        printf("平均      %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
        fclose(fp);
    }
    return 0;
}