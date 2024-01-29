// strpbrk 他の文字列に含まれる文字を探索する
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char *strpbrk(const char *s1, const char *s2) {
    for (; *s1; s1++) {
        const char *t = s2;
        for(; *t; t++)
            if(*t == *s1)
                return (char *)s1;
    }
    return NULL;
}

int main(void) {
    char s1[128], s2[128];
    char *p;

    printf("文字列s1:"); scanf("%s", s1);
    printf("文字列s2:"); scanf("%s", s2);
    if((p = strpbrk(s1, s2)) == NULL)
        printf("文字列s2の中のどの文字も文字列s1中には存在しません\n");
    else
        printf("文字列s2に含まれる文字の文字列s1での最初の出現以降は%sです", p);

        return 0;
}