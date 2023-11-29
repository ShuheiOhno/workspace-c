#include <stdio.h>
#include <stdlib.h>

int glob;
static int stat;

void func( int p){
    static int s;
    int loc;

    printf("parameter addr: %p\n", &p);
    printf("func static addr: %p\n", &s);
    printf("func local addr: , %p\n", &loc);
}

int main() {
    char* alc = malloc(1000);
    func(100);

    printf("allocated addr: %p\n", alc);
    printf("global var addr: %p\n", &glob);
    printf("static var addr: %p\n", &stat);
    printf("func() addr: %p\n", func);
    printf("main(): %p\n", main);
    printf("addr of printf: %p\n", printf);

    return 0;
}