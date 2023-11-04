#include <stdbool.h>
#include <stdio.h>

bool isSymmetric(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    /*
    TODO: Write the implementation here!

    HINT: try while loop and % operation to construct reversedNumber
    */

    return originalNumber == reversedNumber;
} 

