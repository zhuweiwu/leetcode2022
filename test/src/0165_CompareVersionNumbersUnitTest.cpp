#include "gtest/gtest.h"
#include <string>
#include <0165_CompareVersionNumbers.h>
#include <vector>
#include "CheckEqual.h"


TEST(CompareVersionNumbersUnitTest, Test1)
{
    
    string version1 = "1.0.1";
    string version2 = "1";
    int res = CompareVersionNumbers::compareVersion(version1, version2);

    EXPECT_TRUE(res);
    
}