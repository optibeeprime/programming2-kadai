#include <stdio.h>

int main(void) {
    double base, height;
    double area;

    printf("底辺を入力してください: ");
    scanf("%lf", &base);

    printf("高さを入力してください: ");
    scanf("%lf", &height);

    area = base * height / 2.0;

    printf("三角形の面積 = %f\n", area);

    return 0;
}
