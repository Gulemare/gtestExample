#include "gtest/gtest.h"
// Initialise and start all tests of test project
int main(int argc, char ** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}