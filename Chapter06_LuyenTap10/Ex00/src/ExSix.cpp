#include <stdio.h>

int main() {
    FILE* fptr;
    int id;
    char name[20];

    // Tạo dữ liệu mẫu
    fptr = fopen("test.txt", "w");
    fprintf(fptr, "101 Anh");
    fclose(fptr);

    // Đọc bằng fscanf
    fptr = fopen("test.txt", "r");
    fscanf(fptr, "%d %s", &id, name);
    printf("Bai 6: fscanf doc duoc: ID=%d, Name=%s\n", id, name);
    fclose(fptr);
    return 0;
}