#include <stdio.h>

void increment() {
    static int counter = 0; // Retains value across function calls
    counter++;
    printf("Counter = %d\n", counter);
}

int main() {
    increment(); // In ra 1
    increment(); // In ra 2
    increment(); // In ra 3
    
    return 0;
}