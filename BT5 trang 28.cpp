#include <stdio.h>

int phan_tu_thu_n_csn(int a, int q, int n) {
    if (n == 1)
        return a;
    else
        return phan_tu_thu_n_csn(a, q, n - 1) * q;
}

int main() {
    int a, q, n;
    printf("Nhap gia tri a: ");
    scanf_s("%d", &a);
    printf("Nhap cong boi q: ");
    scanf_s("%d", &q);
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Phan tu thu %d cua cap so nhan la: %d\n", n, phan_tu_thu_n_csn(a, q, n));
    return 0;
}
