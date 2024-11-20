#include <stdio.h>

int main() {
    unsigned int a = 0;
    printf("Input positive integer: ");
    scanf("%u", &a);

    printf("bin: ");
    size_t size = sizeof(a);
    unsigned int mask = 1 << (size * 8 - 1);
    while (mask) {
        if (a & mask) {
            printf("1");
        } else {
            printf("0");
        }

        mask >>= 1;
    }

    return 0;
}
