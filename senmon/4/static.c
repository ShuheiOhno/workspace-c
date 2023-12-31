#include <stdio.h>

int glob;
static int stat;

void printvaraddr(void){
    printf("グローバルな変数 [A] %p\n", &glob);
    printf("外部にstaticな変数 [B] %p\n", &stat);
}

void func(int p) {
    static int s;
    int loc;
    printf("-->関数funcの呼び出し\n");
    printvaraddr();

    printf("関数のパラメータ [C] %p\n", &p);
    printf("関数内のstaticな変数 [D] %p\n", &s);
    printf("関数のローカル変数 [E] %p\n", &loc);

    {
        static int ss;
        int tt;

        printf("内部ブロック内のstatic変数 [F] %p\n", &ss);
        printf("内部ブロック内の変数 [G] %p\n", &tt);
    }
    printf("<--関数funcの終了\n");
}

void middle(void) {
    printf("<-- 関数middleの呼び出し\n");
    func(100);
    printf("<-- 関数middleの終了\n");
}

int main() {
    printvaraddr();
    func(100);
    middle();
}