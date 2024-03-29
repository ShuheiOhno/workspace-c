#include <time.h>
#include <stdio.h>

int sleep(unsigned long x){
    clock_t c1 = clock(), c2;
    do {
        if ((c2 = clock()) == (clock_t) - 1)
            return 0;
    } while(1000.0 * (c2 -c1) / CLOCKS_PER_SEC < x);
    return 1;
}

int main(void){
    printf("My name is ABCDEFG");
    fflush(stdout);

    sleep(2000);
    printf("\rHow do you do?    "); // \rは復帰。現在表示位置がその行の先頭に移動する
    fflush(stdout);
    
    sleep(2000);
    printf("\rThanks");

    return 0;
}