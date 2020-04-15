cmake_minimum_required(VERSION 3.5)

# Set the project name
project(sha512256)

# Add an library for the example classes
add_library(prod
        sha512.c
        )


add_executable(sha512
        main.c
        )
target_link_libraries(sha512
        prod
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
target_link_libraries(unit_tests
        prod
        )

add_test(test_all
        unit_tests
        )
