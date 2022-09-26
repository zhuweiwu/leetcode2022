/**
 * @file ReverseInteger.h
 * @brief 
* Reverse digits of an integer.
* 
* Example1: x =  123, return  321
* Example2: x = -123, return -321
* 
* 
* Have you thought about this?
* 
* Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!
* 
* > If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.
* 
* > Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, 
*   then the reverse of 1000000003 overflows. How should you handle such cases?
* 
* > Throw an exception? Good, but what if throwing an exception is not an option? 
*   You would then have to re-design the function (ie, add an extra parameter).
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-23
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _REVERSEINTEGER_H_
#define _REVERSEINTEGER_H_

#include <climits>

class ReverseIntegerClass
{
public:
    static int Reverse(int x)
    {
        long res = 0;
        while(x != 0)
        {
            int digit = x % 10;
            res = res * 10 + digit;

            if(res > INT_MAX)
            {
                return 0;
            }

            if(res < INT_MIN)
            {
                return 0;
            }

            x = x / 10;
        }

        return (int)res;
    }

};


#endif