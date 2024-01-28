// strcat strncat
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[16];
    char *x = "ABC";

    strcpy(s, "QQQ");
    strcat(s, "RRR"); // QQQRRR
    printf("s=%s\n", s);
    
    
    return 0;
}