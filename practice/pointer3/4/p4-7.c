#include <stdio.h>

void swap(char x[], char y[]) {
    // 文字列の長さを取得
    size_t len_x = 0;
    while (x[len_x] != '\0') {
        len_x++;
    }
    // size_t len_x = sizeof(x) / sizeof(x[0]);
    // printf("%zu\n", len_x);

    size_t len_y = 0;
    while (y[len_y] != '\0') {
        len_y++;
    }
    // size_t len_y = sizeof(y) / sizeof(y[0]);
    // printf("%zu\n", len_y);

    // 短い方の文字列の長さを取得
    size_t len = len_x < len_y ? len_x : len_y;

    // 各要素を交換
    for (size_t i = 0; i < len; i++) {
        char temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    }

    // どちらかの文字列が終端に達していない場合、残りの部分もコピー
    if (len_x > len_y) {
        for (size_t i = len_y; i <= len_x; i++) {
            y[i] = x[i];
        }
    } else if (len_x < len_y) {
        for (size_t i = len_x; i <= len_y; i++) {
            x[i] = y[i];
        }
    }
}

int main(void) {
    char a[] = "test1";  // 文字列を格納するための配列
    char b[] = "tewt2";  // 文字列を格納するための配列

    swap(a, b);
    printf("a:%s b:%s\n", a, b);

    return 0;
}
