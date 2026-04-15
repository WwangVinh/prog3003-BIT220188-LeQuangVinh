#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    
    // Ép kiểu sang số thực
    float f = (float)n; 
    printf("Sau khi ep kieu sang so thuc: %.2f\n", f);
    
    // Ép kiểu ngược lại số nguyên
    int back = (int)f;
    printf("Sau khi ep kieu nguoc lai so nguyen: %d\n", back);
    
    return 0;
}