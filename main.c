#include <stdio.h>
#include "sha512.h"

int main() {
    char input[] = {""};
    int inputLength = sizeof(input) / sizeof(typeof(input[0]));
    unsigned long result[] = {0, 0, 0, 0};
    sha512256(input, inputLength, result);
    printf("%lx%lx%lx%lx", result[0], result[1], result[2], result[3]);
    return 0;
}
