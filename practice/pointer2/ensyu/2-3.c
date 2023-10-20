#include <stdio.h>

// #define swap(type, x, y) do {type temp = x; x = y; y = temp; } while (0)
// void sort(int *x[]){
//     if (*x[0] > *x[1]) swap(int *, x[0], x[1]);
//     if (*x[1] > *x[2]) swap(int *, x[1], x[2]);
//     if (*x[0] > *x[1]) swap(int *, x[0], x[1]);
// }

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sort(int *x[]){
    if (*x[0] > *x[1]) swap(x[0], x[1]);
    if (*x[1] > *x[2]) swap(x[1], x[2]);
    if (*x[0] > *x[1]) swap(x[0], x[1]);
}

int main(void){
    int a, b, c;
    int *arr[3] = { &a, &b, &c };
    int arrayCount = sizeof(arr) / sizeof(arr[0]);

    printf("a:"); scanf("%d", &a);
    printf("b:"); scanf("%d", &b);
    printf("c:"); scanf("%d", &c);

    sort(arr);

    for (int i = 0; i < arrayCount; i++){
        printf("a[%d] = %d\n", i, *arr[i]);
    }

}