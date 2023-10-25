#include <stdio.h>

int combination(int n, int r){
    // if (r > 0)
    //     return combination(n - 1, r - 1) + combination(n - 1, r);

    if ( r == 0 || r == n)
        return 1;
    else if ( r == 1)
        return n;
    else
        return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void){
    int n, r;
     printf("n:"); scanf("%d", &n);
     printf("r:"); scanf("%d", &r);
     printf("%d\n", combination(n, r));

     return 0;
}