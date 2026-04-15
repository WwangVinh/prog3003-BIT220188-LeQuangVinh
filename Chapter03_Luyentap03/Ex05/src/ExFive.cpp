#include <stdio.h>

// Ham su dung bien thuong
void incrementNormal() {
    int counter = 0; // Luon bi reset ve 0 moi khi goi ham
    counter++;
    printf("Bien thuong: %d\n", counter);
}

// Ham su dung bien static
void incrementStatic() {
    static int counter = 0; // Chi khoi tao 1 lan duy nhat, sau do se giu gia tri
    counter++;
    printf("Bien static: %d\n", counter);
}

int main() {
    printf("--- Goi ham 3 lan ---\n");

    printf("Lan 1:\n");
    incrementNormal();
    incrementStatic();

    printf("Lan 2:\n");
    incrementNormal();
    incrementStatic();

    printf("Lan 3:\n");
    incrementNormal();
    incrementStatic();

    return 0;
}