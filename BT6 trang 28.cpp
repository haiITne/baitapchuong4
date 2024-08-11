#include <stdio.h>

int U(int n) {
    if (n < 6)
        return n;
    else
        return U(n - 5) + U(n - 4) + U(n - 3) + U(n - 2) + U(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Gia tri U(%d) la: %d\n", n, U(n));
    return 0;
}
