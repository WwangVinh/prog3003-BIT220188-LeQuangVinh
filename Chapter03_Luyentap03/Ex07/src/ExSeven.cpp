#include <stdio.h>

int main() {
    float a, b;

    printf("Nhap so bi chia a: ");
    scanf("%f", &a);
    printf("Nhap so chia b: ");
    scanf("%f", &b);

    // Kiem tra neu so chia bang 0 de tranh loi chuong trinh
    if (b == 0) {
        printf("Loi: Khong the thuc hien phep chia cho 0!\n");
    } else {
        float ketQua = a / b;
        printf("Ket qua phep chia %.2f / %.2f la: %.2f\n", a, b, ketQua);
    }

    return 0;
}