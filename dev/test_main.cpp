#include <gtest/gtest.h>

#include "figure.hpp"

TEST(FIGURE, check) { EXPECT_TRUE(true); }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
