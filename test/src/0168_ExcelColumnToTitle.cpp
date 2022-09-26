#include "gtest/gtest.h"
#include <0168_ExcelColunmToTitle.h>


TEST(ExcelColumnToTitleUnitTest, Test1)
{
    int val = 701;
    string rst = ExcelColumnToTitle::convertToTitle(val);

    EXPECT_EQ("AA", rst);
}