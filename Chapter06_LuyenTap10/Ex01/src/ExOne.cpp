#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    FILE* filePointer;
    Student s1 = {"Quang Vinh", 20};
    Student s_read;

    // Bước 1: Ghi struct vào file ở chế độ "wb"
    filePointer = fopen("student.dat", "wb");
    if (filePointer == NULL) return 1;

    // Sử dụng fwrite để ghi
    fwrite(&s1, sizeof(Student), 1, filePointer);
    fclose(filePointer);

    // Bước 2: Đọc lại struct từ file ở chế độ "rb"
    filePointer = fopen("student.dat", "rb");
    if (filePointer == NULL) return 1;

    // Sử dụng fread để đọc
    fread(&s_read, sizeof(Student), 1, filePointer);

    // In kết quả kiểm tra
    printf("Student: %s, Age: %d\n", s_read.name, s_read.age);

    fclose(filePointer);
    return 0;
}