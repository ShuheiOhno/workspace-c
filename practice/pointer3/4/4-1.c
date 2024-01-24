#include <stdio.h>

int main(void) {
    printf("sizeof(char)=%u\n", (unsigned)sizeof(char));
    printf("sizeof('A')=%u\n", (unsigned)sizeof('A')); //文字定数は、int型と同じ
    printf("sizeof(int)=%u\n", (unsigned)sizeof(int));
    return 0;
}