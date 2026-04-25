#include <stdio.h>

int main(void) {
    int apple, orange, strawberry;
    int total;

    printf("りんごの個数: ");
    scanf("%d", &apple);

    printf("オレンジの個数: ");
    scanf("%d", &orange);

    printf("苺パックの個数: ");
    scanf("%d", &strawberry);

    total = apple * 100
          + orange * 88
          + strawberry * 398;

    printf("合計金額 = %d円\n", total);

    return 0;
}
