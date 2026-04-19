#include <stdio.h>

// Hàm tính trung bình cộng trả về địa chỉ
float* tinhTrungBinh(float *a, float *b, float *c) {
    // Dung 'static' de bien ton tai sau khi thoat khoi ham
    static float tb;
    tb = (*a + *b + *c) / 3;
    return &tb; // Tra ve dia chi cua bien tb
}

int main() {
    float a, b, c;
    printf("Nhap ba so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Goi ham va nhan ve mot con tro
    float *ketQua = tinhTrungBinh(&a, &b, &c);

    printf("Gia tri trung binh la: %.2f\n", *ketQua);
    return 0;
}