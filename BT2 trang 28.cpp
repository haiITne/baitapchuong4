#include <stdio.h>

int luy_thua(int m, int n) {
    int ket_qua = 1;
    for (int i = 0; i < n; i++) {
        ket_qua *= m;
    }
    return ket_qua;
}

int main() {
    int m, n;
    printf("Nhap m: ");
    scanf_s("%d", &m);
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Ket qua: %d\n", luy_thua(m, n));
    return 0;
}
