#include <stdio.h>

int main(void){
    int no;

    printf("何個*を表示しますか？");
    scanf("%d", &no);

    int rem = no % 5;

    if(no > 0) {
        for (int i = 0; i < no / 5; i++)
        {
            puts("*****");
        }
        
        if (rem > 0){
            for(int i = 0; i < rem; i++){
                putchar('*');
            }
            putchar('\n');
        }
    }
}