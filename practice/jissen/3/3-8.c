//1文字出力ライブラリ
#include <stdio.h>
#define BUFSIZE 256 //バッファの大きさ

char buffer[BUFSIZE]; //バッファ
int buf_no = 0; //現在の要素数
int front = 0; //先頭要素カーソル
int rear = 0; //末尾要素カーソル

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