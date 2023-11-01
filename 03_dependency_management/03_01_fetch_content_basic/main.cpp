#include <iostream>

#include <gtest/gtest.h>

TEST(HellowWorldTest, BasicAssertions) {
    EXPECT_STRNE("hello", "world");
    EXPECT_TRUE(1 == 1);
    EXPECT_FALSE(1 == 0);
}

int main(int argc, char const *argv[]) {
    // Run the tests module.
    testing::InitGoogleTest(&argc, (char **)argv);
    return RUN_ALL_TESTS();
}
