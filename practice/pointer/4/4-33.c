#include <stdio.h>
#include <string.h>

int main(void){
    char st[128];
    char strMoto[8] = "ABCDE";

    puts("\"ABCDE\"との比較を行います");
    puts("\"XXXXX\"との比較を行います");

    while (1)
    {
        printf("\n文字列st:");
        scanf("%s", st);
        if(strcmp(st, "XXXXX") == 0)
            break;
        printf("strcmp(\"ABCDE\", st) = %d\n", strcmp(strMoto, st));
        printf("strcmp(\"ABCDE\", st, 3) = %d\n", strncmp(strMoto, st, 3));
    }
    return 0;
    
}