//sort
#include <stdio.h>
#define NUMBER 5

//バブルソート
void bsort(int a[], int n){
    for (int i = n; i > 0; i--){
        for (int j = 1; j < i; j++){
            if(a[j-1] > a[j]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j-1] = temp;
            }
        }
    }
}

int main(void){
    int height[NUMBER];
    printf("input height\n", NUMBER);
    for (int i = 0; i < NUMBER; i++){
        printf("%2d:", i+1);
        scanf("%d", &height[i]);
    }
    // for (int i = 0; i < NUMBER; i++)
    //     printf("%d:\n", height[i]);
    // printf("%d", height[0]);
    // printf("%d", height[1]);
    // printf("%d", height[2]);
    // printf("%d", height[3]);
    // printf("%d", height[4]);
    

    bsort(height, NUMBER);

    puts("asc sort");
    for (int i = 0; i < NUMBER; i++){
        printf("%2d:%d\n", i+1,height[i]);
    }
    
    return 0;
}
