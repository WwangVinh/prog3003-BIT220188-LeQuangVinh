#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("SLIDE 35: <stdio.h>\n");

    // 1. printf(): In ra màn hình
    printf("Hello, World!\n");

    // 2. scanf() và putchar(): Nhập và in 1 ký tự
    char c;
    printf("Ban hay nhap 1 ky tu bat ky: ");
    scanf(" %c", &c); // Có dấu cách trước %c để tránh trôi lệnh
    printf("Ky tu ban vua nhap la: ");
    putchar(c);

    printf("\n");
    printf("\n");


    printf("SLIDE 36: <stdlib.h>\n");

    // 1. atoi(), atof(): Chuyển chuỗi thành số
    int num_i = atoi("123");
    double num_f = atof("45.67");
    printf("chuyen thanh so nguyen: %d\n", num_i);
    printf("chuyen thanh so thuc: %.2f\n", num_f);

    // 2. malloc() và free(): Cấp phát và giải phóng bộ nhớ động
    int *ptr = (int*)malloc(sizeof(int)); // Xin 1 ô nhớ
    if (ptr != NULL) {
        *ptr = 99; // Gán giá trị
        printf("Da cap phat o nho va gan gia tri = %d\n", *ptr);
        free(ptr); // Trả lại ô nhớ
        printf("Da giai phong bo nho an toan.\n");
    }

    // 3. rand(): Tạo số ngẫu nhiên
    printf("Tao mot so ngau nhien tu 0 den 99: %d\n", rand() % 100);
    printf("\n");


    printf("SLIDE 37: <math.h>\n");

    double x = 16.0;
    double y = 2.0;

    // Hàm lượng giác trong C dùng đơn vị Radian (30 độ ~ 0.523599 radian)
    double angleRadian = 0.523599;

    // 1. sqrt(): Căn bậc
    printf("sqrt(%.1f) = %.1f\n", x, sqrt(x));

    // 2. pow(): Lũy thừa
    printf("pow(%.1f, %.1f) = %.1f\n", x, y, pow(x, y));

    // 3. sin(), cos(), tan(): Lượng giác
    printf("sin(30 do) ~ %.2f\n", sin(angleRadian));
    printf("cos(30 do) ~ %.2f\n", cos(angleRadian));
    printf("tan(30 do) ~ %.2f\n", tan(angleRadian));

    return 0;
}
