#include <stdio.h>

// Định nghĩa struct
struct Student {
    char mssv[20];
    char ten[50];
};

int main() {
    // Khởi tạo và gán giá trị trực tiếp
    struct Student sv1 = {"2024ABC01", "Nguyen Van A"};

    // In thông tin dùng printf
    printf("--- Thong tin Sinh vien ---\n");
    printf("MSSV: %s\n", sv1.mssv);
    printf("Ten : %s\n", sv1.ten);

    return 0;
}
