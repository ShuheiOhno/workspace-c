#include <stdio.h>

int factorial(int n){
    if (n > 0)
        return n * factorial(n - 1);
    else
        return 1;
}

int main(void){
    int num;
    printf("input integer:");
    scanf("%d", &num);
    printf("%d kaijou %d\n",num, factorial(num));
}