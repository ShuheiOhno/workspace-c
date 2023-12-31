#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define QNO 12 //単語の数

//日本語
char *jword[] = {
    "動物", "車", "花", "家", "机", "本",
    "椅子", "父", "母", "愛", "平和", "雑誌",
};

//英語
char *eword[] = {
    "animal", "car", "flower", "house", "desk", "book",
    "chair", "father", "mother", "love", "peace", "magazine",
};

int main(void){
    srand(time(NULL)); //乱数の種を設定

    int pq = QNO; //前回の問題番号
    int retry; //再挑戦するかの判定用
    int *a;
    int b;

    do {
        int nq; //問題番号

        do { //前回の問題番号と重複しないように番号を決定
            nq = rand() % QNO;
        } while (nq == pq);

        int lang = rand() % 2; //単語の言語（0:日本語、1:英語）
        a = &lang;
        b = lang;

        printf("%s\n", lang ? eword[nq] : jword[nq]); //0:false

        pq = nq;

        printf("もう一度？ 0:いいえ 1:はい:");
        scanf("%d", &retry);

    printf("--------------\n");
        printf("*a: %d\n", *a);
        printf("b: %d\n", b);
    printf("--------------\n");

    } while (retry == 1);
        // printf("%d", &a);
    printf("%d", retry);
    return 0;
}

