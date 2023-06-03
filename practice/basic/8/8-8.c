//階乗
#include <stdio.h>


//再帰(今回は適切ではない)
//再帰が適している場合：解くべき問題や計算すべき関数、あるいは処理すべきデータ構造が再帰的に定義されている場合
int factorial(int n){
    if(n > 0){
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

//再帰でない場合
int factorial2(int n){
    int f = 1;
    while(n > 0){
        f *= n--;
        // n--;
    }
    return f;
}

int main(void){
    int num;
    printf("整数を入力:");
    scanf("%d", &num);

    printf("%dの階乗は、%d", num, factorial2(num));
    return 0;
}