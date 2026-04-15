#include <stdio.h>

int main() {
    // Biến x này thuộc phạm vi hàm main
    int x = 10;

    printf("Truoc khi vao khoi lenh: x = %d\n", x);

    {
        // Khai bao mot bien x khac ben trong khoi lenh {}
        // Bien nay "che" bien x o ben ngoai
        int x = 20;
        printf("Ben trong khoi lenh: x = %d\n", x);
    } // Ra khoi day, bien x = 20 se bi xoa khoi bo nho

    printf("Sau khi ra khoi khoi lenh: x = %d\n", x);

    return 0;
}