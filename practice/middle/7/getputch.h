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
    static void init_getpuch(void){
        initscr();
        refresh();
    }
    //ライブラリ終了処理
    static void term_getputch(void){
        endwin();
    }
    // putch: 1文字表示
    static int putch(int ch){
        int result = addch(ch) == OK ? ch : EOF;
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
        count = printw("%s", __buf) == OK ? strlen(__buf) : EOF;
        refresh();
        return count;
    } 

    // __puts: puts関数の代替え