#include <stdio.h>

int main(void){
    int no, width;
    printf("何個*を表示しますか:"); scanf("%d", &no);
    printf("何個ごとに改行しますか:"); scanf("%d", &width);

    // for(int i = 1; i <= no; i++){
    //     putchar('*');
    //     if(i % width == 0){
    //         printf("\n");
    //     }
    // }

    if (no > 0) {
        int rem = no % width;
        for (int i = 0; i < no / width; i++){
            for (int j = 0; j < width; j++){
                putchar('*');
            }
            putchar('\n');
        }
        if(rem > 0){
            for (int i = 0; i < rem; i++){
                putchar('*');
            }
            putchar('\n');
        }
    }


    return 0;
}