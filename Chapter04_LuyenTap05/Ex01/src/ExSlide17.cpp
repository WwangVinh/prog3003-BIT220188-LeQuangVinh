#include <stdio.h>

// Hàm hoán đổi hai số
void swap(int* x, int* y) {
    int temp = *x; // Lưu giá trị của *x vào biến tạm
    *x = *y;       // Gán giá trị *y cho *x
    *y = temp;     // Gán giá trị biến tạm cho *y
}

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Gọi hàm swap truyền vào địa chỉ của a và b
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}