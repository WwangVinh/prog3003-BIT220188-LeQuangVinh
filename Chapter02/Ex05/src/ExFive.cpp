#include <stdio.h>

int main() {
    const int MAX_DIEM = 100;
    const float TI_GIA = 25.5;
    const char LOI_CHAO[] = "Hello CMC!"; // Cách khai báo String trong C

    printf("Hang so nguyen: %d\n", MAX_DIEM);
    printf("Hang so thuc: %.1f\n", TI_GIA);
    printf("Hang so chuoi: %s\n", LOI_CHAO); // %s dùng để in chuỗi (String)

    return 0;
}
