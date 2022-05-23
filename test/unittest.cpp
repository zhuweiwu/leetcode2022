/**
 * @file unittest.cpp
 * @brief gtest main entrance
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-22
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#include "gtest/gtest.h"


int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}