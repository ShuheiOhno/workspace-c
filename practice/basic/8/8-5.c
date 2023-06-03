#include <stdio.h>

#define NUMBER 5

void bsort(int a[], int n){
    for (int i = n; i > 0; i--){
        for(int j = 1; j < i; j++){
            if(a[j - 1] > a[j]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}

int main(void){
    int height[NUMBER];

    printf("%d人の身長を入力\n", NUMBER);
    for(int i = 0; i < NUMBER; i++){
        printf("%2d番:", i + 1);
        scanf("%d", &height[i]);
    }

    bsort(height, NUMBER);

    puts("昇順ソート\n");
    for (int i = 0; i < NUMBER; i++){
        printf("%2d番: %d\n", i, height[i]);
    }


    return 0;
}