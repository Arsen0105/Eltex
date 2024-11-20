#include <stdio.h>

int main() {
    int a = 0;
    printf("Input negative integer: ");
    scanf("%d", &a);

    printf("bin: ");
    size_t size = sizeof(a);

    int mask = 1 << (size * 8 - 1);
    if (mask & a) {
        printf("1");
    } else {
        printf("0");
    }

    mask = 1 << (size * 8 - 2);
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
