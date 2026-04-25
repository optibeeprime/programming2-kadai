#include <stdio.h>

int main(void) {
    int a, b, c;
    int avg;

    printf("整数を3つ入力してください:\n");
    scanf("%d %d %d", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("平均 = %d\n", avg);

    return 0;
}
