#include <stdio.h>

int main(void) {
    double a, b, c;
    double avg;

    printf("実数を3つ入力してください:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    avg = (a + b + c) / 3.0;

    printf("平均 = %f\n", avg);

    return 0;
}
