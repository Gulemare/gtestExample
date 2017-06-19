#include "../gtestTDDexample/myclass.h"
#include "gtest/gtest.h"
// Fixture create special enviroment for testing
// created for every test
class MyClassTest : public ::testing::Test {
public:
    MyClassTest() : m(5) {}
    gtestexample::MyClass m;
};

// TEST_F - fixture test
TEST_F(MyClassTest, init) {
    EXPECT_EQ(5, m.getNum());
}

TEST_F(MyClassTest, setNum) {
    m.setNum(10);
    EXPECT_EQ(10, m.getNum());
}

// Standalone testing of class without fixtures
TEST(MyClassTestStandAlone, defaultValuesConstructor) {
    gtestexample::MyClass m;
    EXPECT_EQ(0, m.getNum());
}
