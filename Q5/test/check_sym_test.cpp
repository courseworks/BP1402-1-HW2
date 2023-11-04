#include <gtest/gtest.h>
#include "../include/check_sym.h"

TEST(SymmetryTest, PositiveCases) {
    // Test symmetric numbers
    EXPECT_TRUE(isSymmetric(121));
    EXPECT_TRUE(isSymmetric(12321));
    EXPECT_TRUE(isSymmetric(1234321));
    EXPECT_TRUE(isSymmetric(1111));
}

TEST(SymmetryTest, NegativeCases) {
    // Test non-symmetric numbers
    EXPECT_FALSE(isSymmetric(123));
    EXPECT_FALSE(isSymmetric(12345));
    EXPECT_FALSE(isSymmetric(112233));
    EXPECT_FALSE(isSymmetric(123456));
}
