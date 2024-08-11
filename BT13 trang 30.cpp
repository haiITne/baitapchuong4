#include <stdio.h>

void tinh_day(int n) {
    int x0 = 1, y0 = 0;
    int x = x0, y = y0;
    for (int i = 1; i <= n; i++) {
        x = x0 + y0;
        y = 3 * x0 + 2 * y0;
        x0 = x;
        y0 = y;
    }
    printf("x_%d = %d\n", n, x);
    printf("y_%d = %d\n", n, y);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    tinh_day(n);

    return 0;
}
