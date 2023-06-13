#include <stdlib.h>

//相異なる4つの数字の並びを生成して配列xに格納
void make4digits(int x[]){
    for (int i = 0; i < 4; i++){
        int j, val;    
        do {
            val = rand() % 10; //0-9の乱数
            for (j = 0; j < i; j++){
                if (val == x[j]) {
                    break;
                }
            }
        } while (i < j);

        x[i] = val;
    }


}