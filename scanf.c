#include <stdio.h>

int main(void)
{
    int data;
    double doubledata;
    int min, max, sum;
    // scanf("入力変換指定子",&変数名);  入力変換指定子:入力された数字をどのような数値に変換するかを指定。
    // scanf("%d", &data);
    // scanf("%lf", &doubledata); //実数の場合、%lf。printfとは違う
    // printf("%d\n",data);
    // printf("%f\n", doubledata);
    // printf("最小値と最大値を,で区切って入力してください\n");
    // scanf("%d,%d", &min, &max);
    // sum = (min + max) * (max - min + 1) / 2;
    // printf("%d〜%dの合計は%dです。\n", min, max, sum); 
    int price,price1,price3,price5,price8;
    printf("定価を入力してください：\n");
    scanf("%d",&price);
    price1 = (int)(price*(1-0.1));
    price3 = (int)(price*(1-0.3));
    price5 = (int)(price*(1-0.5));
    price8 = (int)(price*(1-0.8));
    printf("１割引：%d,３割引：%d,５割引：%d,８割引：%d\n",price1,price3,price5,price8);
    return 0;
}