/**
 * @file IsNumberPalindrome.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-23
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _ISNUMBERPALINDROME_H_
#define _ISNUMBERPALINDROME_H_

#include <climits>

class IsNumberPalindromeClass
{
public:
    static bool IsNumberPalindrome(int x)
    {
        if(x < 0)
        {
            return false;
        }

        long res = 0;
        int temp = x;
        while(temp != 0)
        {
            int digit = temp % 10;
            res = res * 10 + digit;
            if(res > INT_MAX)
            {
                return false;
            }
            temp = temp / 10;
        }

        if(res == x)
        {
            return true;
        }

        return false;

    }
};



#endif