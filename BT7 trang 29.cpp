#include <stdio.h>

int tinh_A1(int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 0;
    if (n == 2)
        return -1;
    return 2 * tinh_A1(n - 1) - 3 * tinh_A1(n - 2) - tinh_A1(n - 3);
}

int tinh_A2(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 3;
    return 2 * tinh_A2(n - 3) + tinh_A2(n - 2) - 3 * tinh_A2(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("So hang thu %d cua day theo cong thuc 1 la: %d\n", n, tinh_A1(n));
    printf("So hang thu %d cua day theo cong thuc 2 la: %d\n", n, tinh_A2(n));
    return 0;
}
