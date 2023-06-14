#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void make4digits(int x[]){
    for(int i = 0; i < 4; i++){
        int j, val;
        do {
            val = rand() % 10;
            for (j = 0; j < i; j++){
                if(x[j] == val)
                    break;
            }
        } while(j < i);
        x[i] = val;
    }
}

int check(const char s[]){
    if(strlen(s) != 4){
        return 1;
    }
    for (int i = 0; i < 4; i++){
        if(!isdigit(s[i]))
            return 2;
        for (int j = 0; j < 4; j++)
            if (s[i] == s[j])
                return 3;
    }
    return 0;
}

void judge(const char s[], const int no[], int *hit, int *blow){
    *hit = 0;
    *blow = 0;
    
}