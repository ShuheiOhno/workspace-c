#include <stdio.h>

int main(void) {
    printf("char型は%uバイト\n", (unsigned)sizeof(char));
    printf("int型は%uバイト\n", (unsigned)sizeof(int));
    printf("long型は%uバイト\n", (unsigned)sizeof(long));
    return 0;
}