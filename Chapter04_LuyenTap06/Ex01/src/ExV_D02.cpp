#include <stdio.h>

// Hai ham callback don gian
void chaoTiengViet() { printf("Xin chao!\n"); }
void chaoTiengAnh() { printf("Hello!\n"); }

// Ham thuc thi nhan vao mot "Callback"
void thucThiLoiChao(void (*callback)()) {
    callback(); // Goi ham duoc truyen vao
}

int main() {
    thucThiLoiChao(chaoTiengViet);
    thucThiLoiChao(chaoTiengAnh);
    return 0;
}
