#include <stdio.h>

// Hàm thay đổi các phần tử của mảng
void modifyArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // Nhân đôi mỗi phần tử
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // Gọi hàm modifyArray
    modifyArray(numbers, size);
    
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}