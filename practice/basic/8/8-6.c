#include <stdio.h>

enum gender { Male, Female};
enum season { Spring, Summer, Autumn, Winter};

void print_gender(enum gender gender){
    switch (gender)
    {
    case Male:
        printf("男性");
        break;
    case Female:
        printf("女性");
        break;
    default:
        break;
    }
}

void print_season(enum season season){
    switch(season)
    {
        case Spring:
            printf("春");
            break;
        case Summer:
            printf("夏");
            break;
        case Autumn:
            printf("秋");
            break;
        case Winter:
            printf("冬");
            break;
        default:
            break;
    }
}

enum gender select_gender(void){
    int tmp;
    do {
        printf("0:男性 1:女性");
        scanf("%d", &tmp);
    } while (tmp > Female || tmp < Male);
    return tmp;
}

enum season select_season(void){
    int tmp;
    do {
        printf("0:春 1:夏 2:秋 3:冬");
        scanf("%d", &tmp);
    } while(tmp < Spring || tmp > Winter);
    return tmp;
}

int main(void){
    enum gender your_gender;
    enum season your_season;

    printf("あなたの性別 ");
    your_gender = select_gender();
    printf("生まれた季節 ");
    your_season = select_season();

    printf("あなたは");
    print_gender(your_gender);
    printf("で、");
    print_season(your_season);
    printf("生まれ\n");

    return 0;
}