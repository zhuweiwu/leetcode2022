/**
 * @file RomanToInteger.h
 * @brief
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-23
 *
 * @copyright Copyright (c) 2022  Zhuwei Wu
 *
 */

#ifndef _ROMANTOINTEGER_H_
#define _ROMANTOINTEGER_H_

#include <string>
using namespace std;

class RomanToIntegerClass
{

public:
    static int ConvertCharToNumber(char c)
    {
        int number = 0;
        switch (c)
        {
        case 'I':
            number = 1;
            break;
        case 'V':
            number = 5;
            break;
        case 'X':
            number = 10;
            break;
        case 'L':
            number = 50;
            break;
        case 'C':
            number = 100;
            break;
        case 'D':
            number = 500;
            break;
        case 'M':
            number = 1000;
            break;
        default:
            break;
        }

        return number;
    }

    static int RomanToInteger(string s)
    {
        
    }
};

#endif