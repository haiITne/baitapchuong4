#include <stdio.h>

int tinh_Y(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 3;
    return tinh_Y(n - 1) + 2 * tinh_Y(n - 2) + 3 * tinh_Y(n - 3);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Gia tri Y_%d la: %d\n", n, tinh_Y(n));
    return 0;
}
