#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    for (i = 0; i < argc; i++)
        printf("argv[%d]=%s\n", i, argv[i]);
    printf("argc:%d\n", argc);
    printf("---------------\n");
    i = 0;
    while(argc-- > 0)
        printf("argv[%d]=%s\n", i++, *argv++);
    printf("argc:%d\n", argc);
}