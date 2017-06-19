#include "../gtestTDDexample/myfunctions.h"
#include "gtest/gtest.h"

// TEST(test_case_name, test_name) - simple tests packed by cases

TEST(sumTest, Positives) {
    EXPECT_EQ(3, gtestexample::sum(1,2)); // (expected == actual)
}

TEST(sumTest, Negatives) {
    EXPECT_EQ(-3, gtestexample::sum(-1, -2)); // (expected == actual)
}

TEST(sumTest, Zeros) {
    EXPECT_EQ(0, gtestexample::sum(0, 0)); // (expected == actual)
}