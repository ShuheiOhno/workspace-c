#include <stdio.h>
#include <string.h>

#define NUMBER 3
#define NAME_LEN 64

typedef struct student {
    char name[NAME_LEN];
    int height;
    float weight;
} Student;

//交換
void swap_Student(Student *x, Student *y){
    Student temp = *x;
    *x = *y;
    *y = temp;
}

//身長順(昇順)にソート 先頭n個の要素
void sort_by_height(Student a[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = n - 1; j > i; j--){
            if(a[j - 1].height > a[j].height){
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

//名前の昇順にソート
void sort_by_name(Student a[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = n - 1; j > i; j--){
            if(strcmp(a[j - 1].name, a[j].name) > 0){
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}



int main(void){
    int sort_type;
    Student std[5];

    for (int i = 0; i < NUMBER; i++){
        printf("%d番目の学生\n", i + 1);
        printf("名前:"); scanf("%s", std[i].name);
        printf("身長:"); scanf("%d", &std[i].height);
        printf("体重:"); scanf("%f", &std[i].weight);
    }
    printf("どちらのソートを行いますか: 0-身長 1-体重: ");
    scanf("%d", &sort_type);
    switch(sort_type){
        case 0: sort_by_height(std, NUMBER);
        break;
        case 1: sort_by_name(std, NUMBER);
        break;
        default: break;
    }
    for(int i = 0; i < NUMBER; i++){
        printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
    }
    return 0;
}