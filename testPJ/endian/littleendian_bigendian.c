#include <stdio.h>

int main() {
    unsigned int num = 0x12345678; // 4バイトの整数値

    printf("Original Value: 0x%08X\n", num);

    // メモリに格納されたバイト列を表示
    printf("Memory Content: ");
    for (int i = 0; i < sizeof(num); i++) {
        printf("%02X ", *((unsigned char*)&num + i));
    }
    printf("\n");

    return 0;
}
