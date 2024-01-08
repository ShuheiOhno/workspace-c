#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE 10

int main(void){
    int dgt[9] = {1,2,3,4,5,6,7,8,9};
    int a[8];

    srand(time(NULL));
    printf("かけている数字は？\n");

    time_t start = time(NULL);
    for(int stage = 0; stage < MAX_STAGE; stage++){
        int x = rand() % 9; //コピーを飛ばす要素の添字
        int i = 0, j = 0;
        while (i < 9)
        {
            if(i != x)
                a[j++] = dgt[i];
            i++;
        }
        for (int i = 0; i < 8; i++)
            printf("%d", a[i]);
        printf(":");

        int no;
        do {
            scanf("%d", &no);
        } while (no != dgt[x]);
    }

    return 0;
}