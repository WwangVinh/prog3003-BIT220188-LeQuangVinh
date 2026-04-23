#include <stdio.h>

int main() {
    FILE* fptr;
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int arr_read[5];

    // Ghi mảng
    fptr = fopen("array.dat", "wb");
    fwrite(arr, sizeof(int), n, fptr);
    fclose(fptr);

    // Đọc mảng
    fptr = fopen("array.dat", "rb");
    fread(arr_read, sizeof(int), n, fptr);
    fclose(fptr);

    // Kiểm tra
    printf("Bai 2: Mang doc ra: ");
    for(int i = 0; i < n; i++) printf("%d ", arr_read[i]);
    printf("\n");
    return 0;
}