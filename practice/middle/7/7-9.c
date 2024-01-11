// 可変個引数
#include <stdio.h>
#include <stdarg.h>

double vsum(int sw, ...){
    double sum = 0.0;
    va_list ap; //関数呼び出し時に積まれた引数をアクセスするための特殊な型

    va_start(ap, sw); //可変部引数アクセス開始(va_argおよびva_endの呼び出しに備えてapを初期化する)

    switch (sw) {
    // int型の第二引数とint型の第三引数を加算
    case 0: sum += va_arg(ap, int); // vsum(0,int,int) 可変個部の引数を一つずつ取り出す
            sum += va_arg(ap, int);
        break;
    // int型の第二引数とlong型の第三引数を加算
    case 1: sum += va_arg(ap, int); // vsum(1,int,long)
            sum += va_arg(ap, long);
            break;
    // int型の第二引数とlong型の第三引数とdouble型の第四引数を加算
    case 2: sum += va_arg(ap, int); // vsum(2,int,long,double)
            sum += va_arg(ap, long);
            sum += va_arg(ap, double);
            break;
    }
    va_end(ap); //可変部引数アクセス終了
    return sum;
}

int main(void){
    printf("10 + 2 = %.2f\n", vsum(0, 10, 2));
    printf("57 + 300000L = %.2f\n", vsum(1, 57, 300000L));
    printf("98 + 2L + 3.14 = %.2f\n", vsum(2, 98, 2L, 3.14));
    return 0;
}