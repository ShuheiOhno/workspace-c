#include <stdio.h>

int main(void){
    struct Fruits
    {
        char name[128];
        int price;
        int zaiko;
    };

    struct Fruits fruit = {"apple", 150, 10};
    struct Fruits *p;
    p = &fruit;
    printf("name: %s\n", p->name);
    printf("price: %d\n", p->price);
    printf("zaiko: %d\n", p->zaiko);
    printf("name: %s\n", (*p).name);
    printf("price: %d\n", (*p).price);
    printf("zaiko: %d\n", (*p).zaiko);

    // これでもOK
    // printf("name: %s\n", fruit.name);
    // printf("price: %d\n", fruit.price);
    // printf("zaiko: %d\n", fruit.zaiko);





    return 0;
}