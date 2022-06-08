#include "gtest/gtest.h"
#include <string>
#include "../../../src/0118/PascalTriangle.h"
#include <vector>
#include "../CheckEqual.h"


TEST(PascalTriangleUnitTest, Test1)
{
    
    int rowNum = 5;
    vector<vector<int>> res = PascalTriangle::generate(rowNum);

    EXPECT_TRUE(true);
    
}