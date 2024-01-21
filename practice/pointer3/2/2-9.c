#include <stdio.h>

//受け取ったポインタの大きさを表示
void func(int p[]) {
// void func(int *p) {
    printf("sizeof(p)=%u\n", (unsigned)sizeof(p)); //ポインタ
}

int main(void) {
    int a[10] = {0};
    printf("sizeof(a)=%u\n", (unsigned)sizeof(a)); //配列
    printf("sizeof(a[1])=%u\n", (unsigned)sizeof(a[1])); //配列
    printf("sizeof(int *)=%u\n", (unsigned)sizeof(int *)); //配列
    puts("func");
    func(a);
    return 0;
}