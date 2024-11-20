#include <stdio.h>

int main() {
    unsigned int a = 0;
    printf("Input positive integer: ");
    scanf("%u", &a);
    unsigned char byte = 0;
    printf("Input third byte (0-255): ");
    scanf("%hhu", &byte);

    unsigned int mask = ~(255 << 16);
    unsigned int res = (a & mask) | (byte << 16);
    printf("New positive int: %u\n", res);

    return 0;
}
