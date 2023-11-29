#include <stdio.h>

int main(){
    char abc[] = "ABC";
    char *p = abc;
    int i;

    printf("--------------------");
    printf("abc[]=\"ABC\", char *p = abc");
    printf("--------------------\n");
    printf("addr of abc : %p : %s\n", abc, abc);
    printf("p=%p : &p=%p : %s\n", p, &p, p);

    printf("--------------------");
    printf("loop");
    printf("--------------------\n");
    for(i = 0; *p ; ++p, ++i) {
        printf(" p : %c : %p\n", *p, p);
        printf("abc[%d] %c : %p\n", i, abc[i], &abc[i]);
    }

    printf("p=%p : &p=%p : %s\n", p, &p, p);
    return 0;
}