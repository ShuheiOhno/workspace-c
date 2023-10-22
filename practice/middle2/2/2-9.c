#include <time.h>
#include <stdio.h>
#include <string.h>

int sleep(unsigned long x){
    clock_t c1 = clock(), c2;
    do {
        if ((c2 = clock()) == (clock_t)-1) //エラー
            return 0;
    }
}