cmake_minimum_required(VERSION 3.5)

# Set the project name
project(sha512256)

# Add an library for the example classes
add_library(prod
        main.c
        )

add_executable(sha512
        main.c
        )


#############################################
# Unit tests

# enable CTest testing
enable_testing()

# Add a testing executable
add_executable(unit_tests
        munit.c
        test.c
        )

add_test(test_all
        unit_tests
        )
