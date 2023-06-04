#include <stdio.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];
    int height;
    float weight;
};

int main(void){
    struct student mike = {"Mike", 170};
    printf("名前:%s %p\n", mike.name, mike.name);
    printf("身長:%d %p\n", mike.height, &mike.height);
    printf("体重:%1f %p\n", mike.weight, &mike.weight);

    return 0;
}