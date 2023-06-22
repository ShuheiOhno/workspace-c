//1文字入出力ライブラリの使用例
#include <ctype.h>
#include <stdio.h>
#define BUFSIZE 256 //バッファの大きさ

char buffer[BUFSIZE]; //バッファ
int buf_no = 0; //現在の要素数
int front = 0; //先頭要素カーソル
int rear = 0; //末尾要素カーソル

int getchr(void);
int ungetchr(int ch);

//整数（数字の列）を読み込んで、2倍の値を表示
int getnum(void){
    int c = 0;
    int x = 0;
    int ch;

    while ((ch = getchr()) != EOF && isdigit(ch))
    {
        x = x * 10 + ch - '0';
        c++;
    }
    if(ch != EOF){
        ungetchr(ch);
    }
    if(c) printf("%d\n", x * 2);
    return ch;
}

//文字を読み込んでそのまま表示
int getnnum(void){
    int ch;
    while ((ch = getchr()) != EOF && !isdigit(ch)){
        putchar(ch);
    }
    
    if(ch != EOF){
        ungetchr(ch);
    }
    putchar('\n');
    return ch;
}

int main(void){
    while (getnum() != EOF){
        if (getnnum() == EOF){
            break;
        }
    }
    return 0;
}




// 1文字取り出す
int getchr(void){
    //バッファが空であれば、キーボードから読み込んで返す
    if(buf_no <= 0){
        return getchar();
    } else {
        buf_no--;
        int temp = buffer[front++];
        if (front == BUFSIZE)
            front = 0;
        return temp;
    }
}

//1文字押し戻す
int ungetchr(int ch){
    if(buf_no >= 0){
        return EOF;
    } else {
        buf_no++;
        buffer[rear++] = ch;
        if (rear == BUFSIZE){
            rear = 0;
        }
        return ch;
    }
}
