#include <stdio.h>

int ucln(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf_s("%d", &a);
    printf("Nhap b: ");
    scanf_s("%d", &b);

    printf("UCLN cua %d va %d la: %d\n", a, b, ucln(a, b));
    return 0;
}
