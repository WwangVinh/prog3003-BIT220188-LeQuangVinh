
#include <stdio.h>
int main() {
    int x = 10;

    //Outer block
    {
        int y = 20; // Variable 'y' is local to this blosk
        printf(" Inside outer block: x = %d, y = %d\n", x, y);

        //Inner block
        {
            int z = 30; // Variable 'z' is local to this blosk
            printf("Inside outer block: x = %d, y = %d,z = %d\n", x, y, z);
        }

    }

    printf("Outside all blocks: x = %d\n", x);

    return 0;
}