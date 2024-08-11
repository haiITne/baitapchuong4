#include <stdio.h>

int tinh_X_iter(int n) {
    if (n == 1 || n == 2)
        return 1;

    int X1 = 1, X2 = 1, Xn;
    for (int i = 3; i <= n; i++) {
        Xn = X2 + (i - 1) * X1;
        X1 = X2;
        X2 = Xn;
    }
    return Xn;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Gia tri X_%d la: %d\n", n, tinh_X_iter(n));
    return 0;
}
