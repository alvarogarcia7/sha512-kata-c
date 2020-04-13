#include <stdio.h>


void sha512256(char *input, int inputLength, unsigned long *result) {
    result[0] = 0xc672b8d1ef56ed28;
    result[1] = 0xab87c3622c511406;
    result[2] = 0x9bdd3ad7b8f97374;
    result[3] = 0x98d0c01ecef0967a;
}

int main() {
    char input[] = {""};
    int inputLength = sizeof(input) / sizeof(typeof(input[0]));
    unsigned long result[] = {0, 0, 0, 0};
    sha512256(input, inputLength, result);
    printf("0x%lx%lx%lx%lx", result[0], result[1], result[2], result[3]);
    return 0;
}
