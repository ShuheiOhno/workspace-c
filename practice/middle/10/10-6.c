#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CNO 4 //選択肢の数

#define swap(type, x, y) do { type t = x; x = y; y = t;} while (0)

int qno; //単語の数
char **jword; //日本語単語へのポインタの配列
char **eword; //英単語へのポインタの配列


//選択肢を生成して正解の添字を返す
int make_cand(int c[], int answer) {
    c[0] = answer; //先頭要素に正解を入れる

    for (int i = 1; i < CNO; i++){
        int j, x;
        do { //重複しないように選択肢を生成
            x = rand() % qno;
            for (j = 0; j < i; j++){
                if (c[j] == x) //生成済み添字をスキップ
                    break;
            }        
        } while (i != j);
        c[i] = x;
    }

    int idx = rand() % CNO; //正解の格納先の添字
    if(idx != 0)
        swap(int, c[0], c[idx]); //正解を移動
    
    return idx;
}

//選択肢を表示
void print_cand(const int c[], int lang) {
    for (int i = 0; i < CNO; i++)
        printf("(%d) %s ", i, lang ? jword[c[i]] : eword[c[i]]);
    printf(":");
}

//単語を読み込む
int read_word(void) {
    FILE *fp;
    if((fp = fopen("Word", "r")) == NULL) return 1;
    fscanf(fp, "%d", &qno); //単語すうを読み込む
    if((eword = calloc(qno, sizeof(char *))) == NULL) return 1;
    if((jword = calloc(qno, sizeof(char *))) == NULL) return 1;

    for(int i = 0; i < qno; i++){
        char etemp[1024];
        char jtemp[1024];

        fscanf(fp, "%s%s", etemp, jtemp);
        if((eword[i] = malloc(strlen(etemp) + 1)) == NULL) return 1;
        if((jword[i] = malloc(strlen(etemp) + 1)) == NULL) return 1;
        strcpy(eword[i], etemp);
        strcpy(jword[i], jtemp);
    }
    fclose(fp);
    return 0;
}

int main(void) {
    if(read_word() == 1) {
        printf("\a単語ファイルの読み込みに失敗しました\n");
        return 1;
    }

    srand(time(NULL)); //乱数の種

    int pq = qno; //前回の問題番号
    int retry;

    do {
        int nq; //問題番号
        int cand[CNO]; //選択肢の番号
        
        do { //前回と重複しないように問題番号を決定
            nq = rand() % qno;
        } while(nq == pq);

        int lang = rand() % 2; //0:日本語 1:英語

        printf("%sはどれですか?\n", lang ? eword[nq] : jword[nq]);

        int na = make_cand(cand, nq); //選択肢を生成
        int no; //読み込む解答番号

        do {
            print_cand(cand, lang); //選択肢を表示
            scanf("%d", &no);
            if(no != na)
                puts("\a違います");
        } while(no != na);
        puts("正解です");

        pq = nq;

        printf("もう一度？ 0-いいえ/1-はい：");
        scanf("%d", &retry);
    } while(retry == 1);

    for(int i = 0; i < qno; i++){
        free(eword[i]);
        free(jword[i]);
    }
    free(eword);
    free(jword);

    return 0;
}