#include <stdio.h>

int fibonacci_max_iter(int n) {
    int a = 1, b = 1, temp;
    while (b < n) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("So Fibonacci lon nhat nho hon %d la: %d\n", n, fibonacci_max_iter(n));
    return 0;
}
