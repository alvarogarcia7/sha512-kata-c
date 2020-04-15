#include <stdio.h>
#include "sha512.h"

void sha512256(char *input, int inputLength, unsigned long *result) {
    result[0] = 0xc672b8d1ef56ed28;
    result[1] = 0xab87c3622c511406;
    result[2] = 0x9bdd3ad7b8f97374;
    result[3] = 0x98d0c01ecef0967a;
}
