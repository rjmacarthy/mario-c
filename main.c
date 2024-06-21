#include <stdio.h>
#include <stdlib.h>

void draw(unsigned int num, const char *symbol) {
    unsigned int mask = (1U << 31);

    for (int i = 0; i < 32; ++i) {
        if (num & mask) {
            printf(" %s", symbol);
        } else if (i > 16) {
            printf("  ");
        }

        mask >>= 1;
    }

    printf("\n");
}

int main() {
    const unsigned int mario[16] = {
        2016, 4088, 4064, 8184, 8188, 8184, 2016, 4080,
        8184, 16380, 16380, 16380, 16380, 3696, 7224, 15420
    };

    for (int i = 0; i < 16; ++i) {
        draw(mario[i], "x");
    }

    return EXIT_SUCCESS;
}
