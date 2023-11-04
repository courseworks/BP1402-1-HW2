#include <gtest/gtest.h>
#include <iostream>
#include "../include/check_primes.h"

// Unit test for printing prime numbers between two integers
TEST(PrintPrimesBetweenTwoIntsTest, ValidInputs) {
    // Prepare test data
    constexpr unsigned long START = 1;
    constexpr unsigned long END = 10;
    std::string expected = "2 3 5 7 ";

    // Capture standard output stream
    std::ostringstream oss;
    std::streambuf* originalStdOut = std::cout.rdbuf(oss.rdbuf());

    // Call the function under test
    printPrimesBetweenTwoInts(START, END);

    // Restore original standard out
    std::cout.rdbuf(originalStdOut);

    // Compare the expected output with the actual output
    EXPECT_STREQ(oss.str().c_str(), expected.c_str());
}

