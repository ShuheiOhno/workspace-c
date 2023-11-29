#include <stdio.h>

void prmem(const void *_p, int n) {
    const unsigned char *p = _p;
    char i, j;

    for(i=0; i<n; ++i, ++p) {
        printf(" %02x", *p);
    }
}

int main() {
    char c = 0x12;
    short h = 0x1234;
    long l = 0x12345678;
    int i = 0x12345678;

    float f = 2.3;
    double g = 2.3;
    double fg;

    printf("char %p: %02x :", &c, c);
    prmem(&c, sizeof(c)); printf("\n");

    printf("short %p: %02x :", &h, h);
    prmem(&h, sizeof(h)); printf("\n");

    printf("long %p: %04lx :", &l, l);
    prmem(&l, sizeof(l)); printf("\n");

    printf("int %p: %04x :", &i, i);
    prmem(&i, sizeof(i)); printf("\n");

    printf("float %p: %20.16f :", &f, f);
    prmem(&f, sizeof(f)); printf("\n");

    printf("float %p: %20.16f :", &g, g);
    prmem(&g, sizeof(g)); printf("\n");

    fg = f;
    printf("float %p: %20.16f :", &fg, fg);
    prmem(&fg, sizeof(fg)); printf("\n");

    printf("double - float: %g\n", g - fg);

    return 0;
}