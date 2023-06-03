#include <stdio.h>

size_t strlen(const char *s){
    size_t len = 0;
    while (*s)
    {
        len++;
    }
    return len;
}

int main(void){
    return 0;
}