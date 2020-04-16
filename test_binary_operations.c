#include <stdio.h>
#include "sha512.h"
#include "munit.h"
#include <stdlib.h>

static MunitResult
set_a_bit(const MunitParameter params[], void *user_data) {
    unsigned int input = 8; // binary: 1000
    unsigned int expected = 136; // binary: 1000_1000


//    munit_assert_ulong (input, ==, expected);
    return MUNIT_OK;
}

