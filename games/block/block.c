#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define FIELD_WIDTH (14)
#define FIELD_HEIGHT (FIELD_WIDTH * 2)

#define FPS (10) //１秒間に何回描画するか
#define INTERVAL (1000 / FPS)    //ミリ秒 1000は1秒

#define PADDLE_WIDTH (4)

int ballX; //ボールのx座標
int ballY; //ボールのy座標（下が+）
int ballVelocityX = 1; //ボールをどの方向に動かすか（速度）
int ballVelocityY = 1;

int paddleX;
int paddleY;


int field[FIELD_HEIGHT][FIELD_WIDTH];

void DrawScreen() {
            system("cls");
            for (int i = 0; i < FIELD_WIDTH + 2; i++)
                printf("a"); //上の壁
            printf("\n");

            for (int y = 0; y < FIELD_HEIGHT; y++){
                printf("a");
                for(int x = 0; x < FIELD_WIDTH; x++){
                    if((y==ballY) && (x==ballX))
                        printf("o"); //ボール
                    else if ((y==paddleY) && (x>=paddleX) && (x < paddleX+PADDLE_WIDTH))
                        printf("T"); //パドル
                    else if (field[y][x])
                        printf("*"); //ブロック
                    else
                        printf(" ");
                }
                printf("a");
                printf("\n");
            }

            for(int i = 0; i < FIELD_WIDTH + 2; i++)
                printf("a");  //下の壁
}

void Reset() {
    ballX = rand() % FIELD_WIDTH;
    ballY = FIELD_HEIGHT / 3;


    ballVelocityX = (rand()%2) ? 1 : -1;
    ballVelocityY = 1;

    paddleX = (FIELD_WIDTH - PADDLE_WIDTH) /2;
    paddleY = FIELD_HEIGHT - 3;

    for(int y=0; y < FIELD_WIDTH; y++)
        for(int x = 0; x < FIELD_HEIGHT; x++)
            field[y][x] = 1;
    DrawScreen();
}

int main() {
    srand((unsigned int)time(NULL));


    Reset();
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

            if(ballY <= 0)
                ballVelocityY = 1; 
            if(ballY >= FIELD_HEIGHT)
                ballVelocityY = -1; //上の壁に当たるまで、描画されるごとに座標が-1される(上方向に移動)

            

            // 当たり判定
            if((ballY == paddleY - 1) && (ballX >= paddleX -1) && (ballX < paddleX + PADDLE_WIDTH + 1)){
                if(ballX < paddleX + PADDLE_WIDTH / 2)
                    ballVelocityX = -1;
                else
                    ballVelocityX = 1;

                ballVelocityY = -1;
            }

            for (int x = ballX - 1; x <= ballX + 1; x++) {
                int y = ballY - 1;
                if((y < 0) || (x < 0) || (x >= FIELD_WIDTH))
                    continue;

                if(field[y][x]) {
                    field[y][x] = 0;
                    ballVelocityY = 1;
                }
            }


            DrawScreen();

            lastClock = nowClock; 
            
            if(ballY >= FIELD_HEIGHT - 1) {
                Reset();
            }
        }

        //パドルの移動
        if(_kbhit()){
            switch(getch()) {
                case 'a': paddleX--; break;
                case 'd': paddleX++; break;
            }
            if(paddleX < 0) paddleX = 0;
            if(paddleX >= FIELD_WIDTH - PADDLE_WIDTH) paddleX = FIELD_WIDTH - PADDLE_WIDTH;
            DrawScreen();
        }
    }
    
    _getch();
}