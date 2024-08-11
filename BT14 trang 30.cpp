#include <stdio.h>

int tinh_A(int n) {
    if (n == 1)
        return 1;

    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += tinh_A(i);
    }
    return n * sum;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Gia tri A_%d la: %d\n", n, tinh_A(n));
    return 0;
}
