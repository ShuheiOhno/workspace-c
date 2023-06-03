#include <stdio.h>

int main(void){
    int y = 3;
    int z = 3;
    while (y >= 0)
    {
        printf("y:%d z:%d\n", y--, ++z);
    }
    
    return 0;
}