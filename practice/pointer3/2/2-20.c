#include <stdio.h>

//ポインタの配列の受け渡し
void print(const int *x[], int no) {
    for (int i = 0; i < no; i++)
        printf("x[%d]=%p *x[%d]=%d\n", i, x[i], i, *x[i]);
}

int main(void) {
    int a = 5, b = 3, c = 7;
    int *p[3];
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    
    printf("&a=%p a=%d\n", &a, a);
    printf("&b=%p b=%d\n", &b, b);
    printf("&c=%p c=%d\n", &c, c);

    print(p, 3);

    //実験
    printf("-----------\n");
    int a1 = 5, b1 = 3, c1 = 7;
    // int *arr = {&c, &a, &b};  失敗
    int *arr[3] = {&c1, &a1, &b1};
    print(arr, 3);
    return 0;
}