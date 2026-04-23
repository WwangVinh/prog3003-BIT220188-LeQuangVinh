#include <stdio.h>

int main() {
    FILE* fptr;
    int value = 999;
    int readValue;

    // Mở file ở chế độ rb+ (doc/ghi nhi phan)
    fptr = fopen("position.dat", "wb+");

    // Nhảy đến vị trí byte thứ 20
    fseek(fptr, 20, SEEK_SET);
    fwrite(&value, sizeof(int), 1, fptr);

    // Quay lại vị trí 20 để đọc
    fseek(fptr, 20, SEEK_SET);
    fread(&readValue, sizeof(int), 1, fptr);

    // In vị trí con trỏ hiện tại
    printf("Bai 4: Gia tri doc: %d\n", readValue);
    printf("Vi tri con tro hien tai: %ld\n", ftell(fptr));

    fclose(fptr);
    return 0;
}