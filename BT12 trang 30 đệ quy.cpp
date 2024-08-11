#include <stdio.h>

int fibonacci(int n) {
    if (n <= 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibonacci_max(int n) {
    int i = 1;
    while (fibonacci(i) < n) {
        i++;
    }
    return fibonacci(i - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("So Fibonacci lon nhat nho hon %d la: %d\n", n, fibonacci_max(n));
    return 0;
}
