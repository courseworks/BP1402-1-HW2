#include <stdio.h>
#include "HW.h"

#define ASSERT(condition) \
    do { \
        if (!(condition)) { \
            printf("Assertion failed: %s, line %d\n", __FILE__, __LINE__); \
            return 1; \
        } \
    } while(0)

int test_add() {
    int result = add(2, 3);
    ASSERT(result == 5);
}

int test_subtract() {
    int result = subtract(6, 3);
    ASSERT(result == 3);
}

int main() {
    printf("Running tests...\n");

    test_add();
    test_subtract();

    printf("All tests passed!\n");

    return 0;
}