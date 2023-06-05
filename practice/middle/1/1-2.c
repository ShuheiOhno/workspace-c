#include <stdio.h>

int main(void){
    printf("0〜9の整数を当てよう\n\n");
    int ans = 7;
    int no; //読み込んだ値

    do {
        printf("いくつでしょう？");
        scanf("%d", &no);

        if(no > ans){
            printf("もっと小さい\n");
        } else if(no < ans) {
            printf("もっと大きい\n");
        } 
    } while(no != ans);
    
    printf("正解です\n");
    
    return 0;
}