#include <stdio.h>

typedef struct {
    char name[50];
    float price;
} Product;

int main() {
    FILE* fptr;
    Product list[2] = {{"Laptop", 1500.5}, {"Phone", 800.0}};
    Product list_read[2];

    // Ghi mảng struct
    fptr = fopen("products.dat", "wb");
    fwrite(list, sizeof(Product), 2, fptr);
    fclose(fptr);

    // Đọc mảng struct
    fptr = fopen("products.dat", "rb");
    fread(list_read, sizeof(Product), 2, fptr);
    fclose(fptr);

    printf("Bai 3: San pham 1: %s - %.1f$\n", list_read[0].name, list_read[0].price);
    return 0;
}