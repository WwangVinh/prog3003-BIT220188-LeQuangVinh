#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char ch;

    // f1 mo de ghi tiep vao cuoi (append)
    f1 = fopen("file1.txt", "a");
    f2 = fopen("file2.txt", "r");

    if (f1 == NULL || f2 == NULL) return 1;

    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f1);
    }

    printf("Bai 7: Da ghep file2 vao sau file1.\n");
    fclose(f1);
    fclose(f2);
    return 0;
}