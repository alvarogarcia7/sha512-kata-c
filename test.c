#include "munit.h"

int main(void) {
    int foo = 0;
    int bar = 0;
    munit_assert_int(foo, ==, bar);
}