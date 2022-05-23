#include "gtest/gtest.h"
#include <string>
#include "../../../src/0001/TwoSum.h"
#include <vector>
#include "../CheckEqual.h"


TEST(TwoSumUnitTest, Test1)
{
    vector<int> nums{1,2,3,4,5,6,7};
    int target = 4;
    vector<int> res = TwoSumClass::TwoSum(nums, target);

    bool isEqual = CheckEqual::CheckVector(res, vector<int>{0,2});

    EXPECT_TRUE(isEqual);
    
}