#include <stdio.h>

int main() {
    unsigned int a = 0;
    printf("Input positive integer: ");
    scanf("%u", &a);

    size_t size = sizeof(a);
    unsigned int mask = 1 << (size * 8 - 1);
    unsigned char n = 0;
    while (mask) {
        if (a & mask) {
            ++n;
        }

        mask >>= 1;
    }
    printf("Count \"1\" in bin: %hhu", n);

    return 0;
}
