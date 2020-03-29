#include <gtest/gtest.h>
#include "../ProjectOne.hpp"

TEST(ExampleTests, DemonstratedGTestMacros) { EXPECT_EQ(true, true); }

TEST(ProjectOneTest, ReturnFromReadBoardFile) {
  vector<vector<int>> ret = ReadBoardFile("1.board");
  EXPECT_EQ(true, true);
}