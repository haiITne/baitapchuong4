#include <stdio.h>

int phan_tu_thu_n_csc(int a, int r, int n) {
    if (n == 1)
        return a;
    else
        return phan_tu_thu_n_csc(a, r, n - 1) + r;
}

int main() {
    int a, r, n;
    printf("Nhap gia tri a: ");
    scanf_s("%d", &a);
    printf("Nhap cong sai r: ");
    scanf_s("%d", &r);
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Phan tu thu %d cua cap so cong la: %d\n", n, phan_tu_thu_n_csc(a, r, n));
    return 0;
}
