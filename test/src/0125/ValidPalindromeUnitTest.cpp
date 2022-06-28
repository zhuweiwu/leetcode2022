#include "gtest/gtest.h"
#include <string>
#include "../../../src/0125/ValidPalindrome.h"
#include <vector>
#include "../CheckEqual.h"


TEST(ValidPalindromeUnitTest, Test1)
{
    
    string s  = "race a car";
    bool res = ValidPalindrome::isPalindrome(s);

    EXPECT_TRUE(res);
    
}