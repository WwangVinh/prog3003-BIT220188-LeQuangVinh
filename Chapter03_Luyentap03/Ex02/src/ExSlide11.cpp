#include <stdio.h>

// Bien toan cuc (Global variable) - Co the su dung o bat ky dau trong file nay
int globalVar = 100; 

void display() {
    // Ham display() su dung duoc globalVar vi no co pham vi toan file
    printf("Global Variable = %d\n", globalVar);
}

int main() {
    // Ham main() cung su dung duoc globalVar
    printf("Global Variable = %d\n", globalVar);
    
    // Goi ham display de xem ket qua
    display();
    
    return 0;
}