#include <stdio.h>

int main() {
    // Outer block (Khoi ngoai)
    int outerValue = 100;

    {
        // Inner block (Khoi trong)
        // Khoi con co the truy cap bien cua khoi cha
        printf("Inner block truy cap bien outerValue: %d\n", outerValue);
    }

    return 0;
}