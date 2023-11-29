#include <stdio.h>

char word[] = "abc";
char *line[] = {"You", "love", "C", "language", NULL};
short prime[] = {2, 3, 5, 7, 11, 13, 17, 19};

int main() {
    int i;
    char *p = word;
    char **pp = line;
    short *ip = prime;
    printf("----------------- *p=word -------------------\n");
    printf("&p=%p\n", &p);
    printf("p=%p *p=%c p[0]=%c p[1]=%c\n",
                  p,   *p,   p[0],   p[1]);
    printf("----------------- ++p -------------------\n");
    ++p;
    printf("&p=%p\n", &p);
    printf("p=%p *p=%c p[0]=%c p[1]=%c\n",
                  p,   *p,   p[0],   p[1]);

    printf("----------------- *pp=line -------------------\n");
    printf("&pp=%p\n", &pp);
    printf("pp=%p *pp=%p pp[0]=%p\n", pp, *pp, pp[0]);
    printf("    *pp=%-10s pp[0]=%-10s\n", *pp, pp[0]);
    printf("----------------- ++p -------------------\n");
    ++pp;
    printf("&pp=%p\n", &pp);
    printf("pp=%p *pp=%p pp[0]=%p\n", pp, *pp, pp[0]);
    printf("    *pp=%-10s pp[0]=%-10s\n", *pp, pp[0]);
    printf("----------------- ++p -------------------\n");
    ++pp;
    printf("&pp=%p\n", &pp);
    printf("pp=%p *pp=%p pp[0]=%p\n", pp, *pp, pp[0]);
    printf("    *pp=%-10s pp[0]=%-10s\n", *pp, pp[0]);
    printf("----------------- ++p -------------------\n");
    ++pp;
    printf("&pp=%p\n", &pp);
    printf("pp=%p *pp=%p pp[0]=%p\n", pp, *pp, pp[0]);
    printf("    *pp=%-10s pp[0]=%-10s\n", *pp, pp[0]);

    printf("----------------- for -------------------\n");
    for(i = -2; i < 2; ++i){
        printf("\tpp[%2d]=%p %p %s\n", i, &pp[i], pp[i], pp[i]);
    }

    printf("----------------- *ip=prime -------------------\n");
    printf("&ip=%p\n", &ip);
    printf("ip=%p *ip=%d ip[0]=%d\n", ip, *ip, ip[0]);
    ip += 3;
    printf("ip=%p *ip=%d ip[0]=%d\n", ip, *ip, ip[0]);
    
    return 0;
}