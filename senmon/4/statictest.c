#include <stdio.h>

void statictest(int i){
    static int s;
    int v;

    if(i>0){
        v = s = i;
    }
    --v;
    --s;
    printf("s=%d v=%d\n", s, v);
}

void accident(void){
    int w;
    w = 12345678;
}

int main(){
    statictest(100);
    statictest(0);
    statictest(0);
    accident();
    statictest(0);
    statictest(0);
    statictest(0);
}