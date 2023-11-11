#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define FIELD_WIDTH (14)
#define FIELD_HEIGHT (FIELD_WIDTH * 2)

#define FPS (10) //１秒間に何回描画するか
#define INTERVAL (1000 / FPS)    //ミリ秒 1000は1秒

int ballX;
int ballY;

int ballVelocityX = 1;
int ballVelocityY = 1;

int main() {
    clock_t lastClock = clock();
    while (1) {
        clock_t nowClock = clock();
        if(nowClock >= lastClock + INTERVAL){ //lastClockからINTERVAL時間が経過した
            ballX += ballVelocityX;
            ballY += ballVelocityY;

            //壁に当たったら跳ね返る
            if(ballX <= 0)
                ballVelocityX = 1;
            if(ballX >= FIELD_WIDTH -1)
                ballVelocityX = -1;

            system("cls");
            for (int i = 0; i < FIELD_WIDTH + 2; i++)
                printf("a"); //上の壁
            printf("\n");

            for (int y = 0; y < FIELD_HEIGHT; y++){
                printf("a");
                for(int x = 0; x < FIELD_WIDTH; x++){
                    if((y==ballY) && (x==ballX))
                        printf("D"); //ボール
                    else
                        printf(" ");
                }
                printf("a");
                printf("\n");
            }

            for(int i = 0; i < FIELD_WIDTH + 2; i++)
                printf("a");  //下の壁

            lastClock = nowClock; 
        }
    }
    
    _getch();
}