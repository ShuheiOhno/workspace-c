#include <stdio.h>

void testfunc();

int main()
{

    int x,y;
    double tax;
    x = 198;
    y = 138;
    tax = 1.05;
    int change;
    change = 1000 - (int)((x + y * 2) * tax);
    printf("%d\n",(int)((x + y * 2) * tax));
    printf("%f\n",((x + y * 2) * tax));
    printf("%d\n",change);
    printf("###########################");

    printf("%5d\n",120); //全体部分５けた

    printf("Hello,World!\n");

    for(int i = 0; i < 3; i++)
    {
        printf("test\n");
    }
    void testfunc();
    // printf("%d", 100); ///整数として出力。小数は%f
    // printf("%d円\n", 100); //100円
    // printf("%d+%d=%d\n",100,200,300); //100+200=300
    // testfunc();

    printf("###############");
    printf("40÷13=%d\n",40/3);
    printf("あまり%d\n",40%3);
}

void testfunc()
{
    printf("testfunc");
    printf("test\n");
    printf("%d", 100); //数値として出力
    printf("%d円\n", 100);
}