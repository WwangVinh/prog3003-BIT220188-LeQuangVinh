#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15;

    // Cach viet cu (long nhau):
    // if (a > 0) {
    //     if (b > 0) {
    //         if (c > 0) { ... }
    //     }
    // }

    // Cach viet moi dung toan tu logic && (VA)
    // Dieu kien: ca 3 so deu phai lon hon 0
    if (a > 0 && b > 0 && c > 0) {
        printf("Ca ba so deu la so duong!\n");
    } else {
        printf("Co it nhat mot so khong phai so duong.\n");
    }

    return 0;
}