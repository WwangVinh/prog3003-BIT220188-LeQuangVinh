#include <stdio.h>

// Hàm tính tổng
long tinhTong(int n) {
    long s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Tong tu 1 den %d la: %ld\n", n, tinhTong(n));
    return 0;
}