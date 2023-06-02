#include <stdio.h>

int main(void){
    int lower, uppper, step;

    printf("何cmから:");  scanf("%d", &lower);
    printf("何cmまで:");  scanf("%d", &uppper);
    printf("何cmごと:");  scanf("%d", &step);

    for(int i = lower; i <= uppper; i += step){
        printf("%dcm %.2fkg\n", i, (i - 100) * 0.9);
    }

    return 0;
}