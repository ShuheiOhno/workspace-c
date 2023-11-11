#include <stdio.h>
#include <conio.h>

#define FIELD_WIDTH (14)
#define FIELD_HEIGHT (FIELD_WIDTH * 2)

int main() {
    for (int i = 0; i < FIELD_WIDTH + 2; i++)
        printf("a");
    printf("\n");

    for (int i = 0; i < FIELD_HEIGHT; i++){
        printf("a");
        for(int j = 0; j < FIELD_WIDTH; j++)
            printf(" ");
        printf("a");
        printf("\n");
    }

    for(int i = 0; i < FIELD_WIDTH + 2; i++)
        printf("a");
    

        
    _getch();
}