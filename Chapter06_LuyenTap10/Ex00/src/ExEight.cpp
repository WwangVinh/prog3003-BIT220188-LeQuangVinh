#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("file1.txt", "r");
    dest = fopen("destination.txt", "w");

    if (src == NULL || dest == NULL) return 1;

    while ((ch = fgetc(src)) != EOF) {
        // Neu la chu thuong thi doi thanh hoa [cite: 730]
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, dest);
    }

    printf("Bai 8: Sao chep va viet hoa hoan tat.\n");
    fclose(src);
    fclose(dest);
    return 0;
}