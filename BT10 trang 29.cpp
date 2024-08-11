#include <stdio.h>
#include <stdlib.h>

int tim_kiem_nhi_phan(int a[], int x, int left, int right) {
    if (left > right)
        return -1; // Không tìm thấy x
    int mid = (left + right) / 2;
    if (a[mid] == x)
        return mid;
    if (a[mid] > x)
        return tim_kiem_nhi_phan(a, x, left, mid - 1);
    return tim_kiem_nhi_phan(a, x, mid + 1, right);
}

int main() {
    int n, x;
    printf("Nhap so phan tu n: ");
    scanf_s("%d", &n);

    int* a = (int*)malloc(n * sizeof(int)); // Cấp phát động mảng
    if (a == NULL) {
        printf("Khong du bo nho.\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf_s("%d", &x);

    int ket_qua = tim_kiem_nhi_phan(a, x, 0, n - 1);
    if (ket_qua == -1)
        printf("Khong tim thay gia tri %d trong mang.\n", x);
    else
        printf("Gia tri %d duoc tim thay tai vi tri %d.\n", x, ket_qua);

    free(a); // Giải phóng bộ nhớ
    return 0;
}
