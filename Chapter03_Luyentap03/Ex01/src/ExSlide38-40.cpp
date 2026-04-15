#include <stdio.h>

int main() {
    int x = 10;

    // Outer block
    {
        int y = 20; // Variable 'y' is local to this block
        printf("Inside outer block: x = %d, y = %d\n", x, y);

        // Inner block
        {
            int z = 30; // Variable 'z' is local to this block
            printf("Inside inner block: x = %d, y = %d, z = %d\n", x, y, z);
        }

        // 'z' is not accessible here
        // printf("z = %d\n", z); // Uncommenting this will cause a compilation error
    }

    // 'y' is not accessible here
    // printf("y = %d\n", y); // Uncommenting this will cause a compilation error

    printf("Outside all blocks: x = %d\n", x);

    return 0;
}