#include <stdio.h>
#include "sha512.h"
#include "munit.h"
#include <stdlib.h>

static void set_bit(unsigned int *input, unsigned int bitNumber);

static void toggle_bit(unsigned int *pInt, unsigned int bitNumber);

static MunitResult
set_a_bit(const MunitParameter params[], void *user_data) {
    unsigned int input = 8; // binary: 1000
    unsigned int expected = 136; // binary: 1000_1000

    set_bit(&input, 8u);

    munit_assert_ulong (input, ==, expected);
    return MUNIT_OK;
}

static MunitResult
set_multiple_bits(const MunitParameter params[], void *user_data) {
    unsigned int input = 8; // binary: 1000
    unsigned int expected = 648; // binary: 10_1000_1000

    set_bit(&input, 8u);
    set_bit(&input, 10u);

    munit_assert_ulong (input, ==, expected);
    return MUNIT_OK;
}

static MunitResult
toggle_a_bit(const MunitParameter params[], void *user_data) {
    unsigned int input = 8; // binary: 1000
    unsigned int expected = 0; // binary: 0

    toggle_bit(&input, 4u);

    munit_assert_ulong (input, ==, expected);
    return MUNIT_OK;
}

static MunitResult
reset_a_bit(const MunitParameter params[], void *user_data) {
    unsigned int input = 0;
    unsigned int expected = input;

    toggle_bit(&input, 4u);
    toggle_bit(&input, 4u);

    munit_assert_ulong (input, ==, expected);
    return MUNIT_OK;
}

static void toggle_bit(unsigned int *input, unsigned int bitNumber) {
    *input ^= 1u << (bitNumber-1);
}

static void set_bit(unsigned int* input, unsigned int bitNumber) {
    *input |= 1u << (bitNumber-1);
}

