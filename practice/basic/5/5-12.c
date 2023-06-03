#include <stdio.h>

#define NINZU 6

int main(void){
    int tensu[NINZU][2];
    int student[NINZU] = {0};
    int subject[2] = {0};
    double person_average[NINZU] = {0};

    printf("%d人の点数を入力\n", NINZU);
    for (int i = 0; i < NINZU; i++){
        printf("%2d番 国語:", i + 1);
        scanf("%d", &tensu[i][0]);
        printf("%2d番 数学:", i + 1);
        scanf("%d", &tensu[i][1]);

        student[i] = tensu[i][0] + tensu[i][1];
        person_average[i] += (double)(student[i] / 2);
        subject[0] += tensu[i][0]; //国語全体の合計
        subject[1] += tensu[i][1]; //数学全体の合計
    }

    printf("番号  国語  数学  合計  平均\n");
    for(int i = 0; i < NINZU; i ++){
        printf("%3d%6d%6d%6d%7.1f\n", i + 1, tensu[i][0], tensu[i][1],
            student[i], person_average[i]);
    }
    printf("---------------------------\n");
    printf("合計%5d%6d%6d\n", subject[0], subject[1], subject[0] + subject[1]);
    printf("平均 %6.1f%6.1f%6.1f\n", (double)subject[0] / NINZU,
                                    (double)subject[1] / NINZU,
                                    (double)(subject[0] + subject[1])/ NINZU);
    return 0;
}