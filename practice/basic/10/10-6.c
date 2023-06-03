#include <stdio.h>

void set_idx(int *v, int n){ //int v[], int v[5]でも同じ(5は無視される)。仮引数vはポインタであって配列ではない
    for (int i = 0; i < n; i++)
    {
        v[i] = i;
    }
    
}

int main(void){
    int a[5];
    set_idx(a, 5);
    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}