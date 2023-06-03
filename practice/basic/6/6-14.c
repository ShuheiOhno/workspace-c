//配列中のある値を持つ全要素の添字を抽出
#include <stdio.h>

#define NUMBER 7
#define FAILED -1

//要素数nの配列vから、keyの全要素の添字をidxに格納して個数を返却
//idxは抽出後の添字表示用
int search_index(const int v[], int idx[], int key, int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if(v[i] == key){
            idx[count++] = i;
        }
    }
    return count;
}


int main(void){

    int key, num;
    int vx[NUMBER];
    int pt[NUMBER];

    for (int i = 0; i < NUMBER; i ++){
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }
    printf("探す値:");
    scanf("%d", &key);

    num = search_index(vx, pt, key, NUMBER);
    if(num == 0){
        puts("\aその値は含まれません\n");
    } else {
        printf("%dは%d個含まれます\n", key, num);
        for (int i = 0; i < num; i++){
            printf("vx[%d] = %d\n", pt[i], vx[pt[i]]);
        }
    }

    return 0;
}