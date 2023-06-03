#include <stdio.h>

int main(void){
    char a[][5] = {"LISP",
                    "C",
                    "Ada"}; //a[2][1] = d
    char *p[] = {"PAUL", "X", "MAC"};
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
        printf("a[%d] = \"%s\"\n", i, a[i]);
    }
    for (int i = 0; i < sizeof(p)/ sizeof(p[0]); i++){
        printf("p[%d] = \"%s\"\n", i, p[i]);
    }

    //charの検証
    char b[5] = {"afff"};
    for (int i = 0; i < sizeof(b)/ sizeof(b[0]); i++){
        printf("b[%d] = %c\n", i, b[i]);
    }
    return 0;
}