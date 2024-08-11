#include <stdio.h>

int tinh_Y_iter(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 3;

    int Y1 = 1, Y2 = 2, Y3 = 3, Yn;
    for (int i = 4; i <= n; i++) {
        Yn = Y3 + 2 * Y2 + 3 * Y1;
        Y1 = Y2;
        Y2 = Y3;
        Y3 = Yn;
    }
    return Yn;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Gia tri Y_%d la: %d\n", n, tinh_Y_iter(n));
    return 0;
}
