#ifndef __GETPUTCH
    #define __GETPUTCH
    #if defined(_MSC_VER) || (__TURBOC__) || LSI_C

    // MS-Windows
    static void init_getputch(void) {}; //ライブラリ初期処理
    static void term_getputch(void) {}; //ライブラリ終了処理
    #else
    // Cursesライブラリが提供されるUNIX/Linux/macOS
    #include <curses.h>
    #include <stdio.h>
    #include <string.h>

    #undef getch
    #undef putchar
    #undef puts
    #undef printf
    #undef scanf

    //ライブラリの初期処理
    static void init_getputch(void){
        initscr(); //スクリーンを作成してライブラリを初期化する。Cursesライブラリの利用時に最初に呼び出さなくてはならない
        refresh(); //画面を更新する
    }
    //ライブラリ終了処理
    static void term_getputch(void){
        endwin(); //ライブラリの後始末用の関数で、Cursesライブラリの利用時に最後に呼び出さなければならない。
    }
    // putch: 1文字表示
    static int putch(int ch){
        int result = addch(ch) == OK ? ch : EOF; //addchar(ch): 文字chを出力する。出力時にはOKを返却し、失敗時はEOFを返却する
        refresh(); //更新
        return result;
    }

    // __putchar: putchar関数の代替え
    static int __putchar(int ch){
        return putchar(ch);
    }
    // __printf: printf関数の代替え
    static int __printf(const char *format, ...){
        int count;
        va_list ap;
        static char __buf[4096];

        va_start(ap, format);
        vsprintf(__buf, format, ap);
        va_end(ap);
        count = printw("%s", __buf) == OK ? strlen(__buf) : EOF; //printw:書式化を行なった表示をする
        refresh();
        return count;
    } 

    // __puts: puts関数の代替え
    static int __puts(const char *s){
        //改行文字を付加して出力
        int count = printw("%s\n", s) == OK ? strlen(s) + 1 : EOF;
        refresh();
        return count;
    }

    // __getch: getch関数のラッパー
    static int __getch(void){
        int ch;
        cbreak(); //行バッファリングを行わないようにする
        noecho(); //タイプされたキーが画面に表示されないようにする
        ch = getch();
        nocbreak();
        echo();
        return ch;
    }

    #define getch __getch
    #define putchar __putchar
    #define printf __printf
    #define puts __puts
    #define scanf scanw
    #endif
#endif