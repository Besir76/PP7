#include <stdio.h>

void debug_printf(const char* msg) {
    printf("DEBUG: %s", msg);
}

int main(void) {
    debug_printf("Hello, PP7!\n");
    return 0;
}

