#include <stdio.h>

// Hàm tìm giá trị lớn nhất
float timMax(float a, float b, float c) {
    float max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    float a, b, c;
    printf("Nhap ba so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Gia tri lon nhat la: %.2f\n", timMax(a, b, c));
    return 0;
}