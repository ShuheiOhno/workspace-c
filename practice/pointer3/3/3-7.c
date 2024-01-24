#include <stdio.h>


int print_array(const a[], int n) {
    printf("{");
    if(n >= 2)
        for (int i = 0; i < n - 1; i++)
            printf("%d, ", a[i]);
    if(n >= 1)
        printf("%d", a[n - 1]);
    printf("}");
}

int sum(const int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int main(void) {
    int x[] = {1,3,5,7};
    int y[][5] = {{1,2,3,4,5},
                  {3,3,3,3,3},
                  {1,3,5,7,9},
                  };

    int x_size = sizeof(x) / sizeof(x[0]);
    int y_height = sizeof(y) / sizeof(y[0]); //yの行数
    int y_width = sizeof(y[0]) / sizeof(y[0][0]);

    printf("配列x");
    print_array(x, x_size);
    printf("合計=%d\n", sum(x, x_size));

    for(int i = 0; i < y_height; i++){
        printf("配列y[%d]---", i);
        print_array(y[i],y_width);
        printf("合計=%d\n", sum(y[i], y_width));
    }
}