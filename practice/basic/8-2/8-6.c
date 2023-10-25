#include <stdio.h>
enum gender { Male, Female};
enum season {Spring, Summer, Autom, Winter};

//表示
void print_gender(enum gender gender){
    switch (gender) {
        case Male: printf("Male"); break;
        case Female: printf("Female");  break;
    }
}

void print_season(enum season season){
    switch(season){
        case Spring: printf("Spring"); break;
        case Summer: printf("Summer"); break;
        case Autom: printf("Autom"); break;
        case Winter: printf("Winter"); break;
    }
}

//選択
enum gender select_gender(void){
    int temp;
    do {
        printf("0:Male  1:Female\n");
        scanf("%d", &temp);
    } while (temp < Male || temp > Female );
    
    return temp;
}

enum season select_season(void){
    int temp;
    do {
        printf("0:Spring  1:Summer  2:Autom  3:Winter\n");
        scanf("%d", &temp);
    } while (temp < Spring || temp > Winter);
    
    return temp;
}

int main(void){
    enum gender your_gender;
    enum season your_season;

    printf("your gender:"); your_gender = select_gender();
    printf("your season"); your_season = select_season();

    print_gender(your_gender);
    printf("\nand\n");
    print_season(your_season);
    return 0;
}