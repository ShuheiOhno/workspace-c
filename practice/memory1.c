#include <stdio.h>

int main(void)
{
    int i, i1, i2, i3;
    int array[10];


    printf("%p\n", &i);
    printf("i1(%p)\n", &i1);
    printf("i2(%p)\n", &i2);
    printf("i3(%p)\n", &i3);

    printf("array___(%p)\n",array); //配列名は、配列の最初の要素のアドレスを表している
    printf("array[0](%p)\n", &array[0]);
    printf("array[1](%p)\n", &array[1]);
    printf("array[2](%p)\n", &array[2]);
    return 0;
}