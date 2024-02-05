#include <stdio.h>

typedef struct {
    int x;
    long y;
    double z;
} XYZ;

int main(void) {
    XYZ a;
    printf("a.x:"); scanf("%d", &a.x);
    printf("a.y:"); scanf("%d", &a.y);
    printf("a.z:"); scanf("%d", &a.z);

    printf("a.x=%d\n", a.x);
    printf("a.y=%d\n", a.y);
    printf("a.z=%d\n", a.z);

    return 0;
}
