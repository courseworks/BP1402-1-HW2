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
    return 0;
}

int test_subtract() {
    int result = subtract(6, 3);
    ASSERT(result == 3);
    return 0;
}

int main() {
    printf("Running tests...\n");

    int add_result = test_add();
    int subtract_result = test_subtract();

    if (add_result == 0 && subtract_result == 0)
        printf("All tests passed!\n");
    else
        printf("Some tests failed!\n");

    return 0;
}