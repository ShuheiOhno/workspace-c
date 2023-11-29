#include <stdio.h>

static char *p = "ABC";

int main() {
    printf("p=%p : &p=%p : %s\n", p, &p, p);

    p = "DEF";

    printf("p=%p : &p=%p : %s\n", p, &p, p);
    for( ; *p; ++p) {
        printf("p : %c : %p\n", *p, p);
    }
    return 0;
}