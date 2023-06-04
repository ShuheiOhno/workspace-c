#include <stdio.h>

#define NAME_LEN 64

typedef struct student {
    char name[NAME_LEN];
    int height;
    float weight;
} Student;

Student scan_Student(){
    Student temp;
    printf("名前:"); scanf("%s", temp.name);
    printf("身長:"); scanf("%d", &temp.height);
    printf("体重:"); scanf("%f", &temp.weight);
    return temp;
}

void set_stdweight(Student *s){
    if((*s).weight <= 0)
        (*s).weight = ((*s).height - 100) * 0.9;
}

int main(void){
    Student std = scan_Student();
    set_stdweight(&std);
    printf("名前:%s\n", std.name);
    printf("身長:%d\n", std.height);
    printf("体重:%.1f\n", std.weight);
    return 0;
}