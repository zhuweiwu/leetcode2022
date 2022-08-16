#include "gtest/gtest.h"
#include <string>
#include <0125_ValidPalindrome.h>
#include <vector>
#include "CheckEqual.h"


TEST(ValidPalindromeUnitTest, Test1)
{
    
    string s  = "race a car";
    bool res = ValidPalindrome::isPalindrome(s);

    EXPECT_FALSE(res);
    
}