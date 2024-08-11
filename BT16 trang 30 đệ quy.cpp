#include <stdio.h>

int tinh_X(int n) {
    if (n == 1 || n == 2)
        return 1;
    return tinh_X(n - 1) + (n - 1) * tinh_X(n - 2);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Gia tri X_%d la: %d\n", n, tinh_X(n));
    return 0;
}
