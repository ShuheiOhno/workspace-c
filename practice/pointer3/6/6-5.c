#include <stdio.h>

typedef struct {
    int no;
    char name[10];
} Member;

int main(void) {
    Member m1;
    printf("会員番号:"); scanf("%d", &m1.no);
    printf("氏名:"); scanf("%s", m1.name);
    printf("会員番号: %d\n", m1.no);
    printf("氏名: %s\n", m1.name);

    return 0;
}
