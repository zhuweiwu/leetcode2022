/**
 * @file AddBinary.h
 * @brief
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-28
 *
 * @copyright Copyright (c) 2022  Zhuwei Wu
 *
 */

#ifndef _ADDBINARY_H_
#define _ADDBINARY_H_

#include <string>

using namespace std;

class AddBinaryClass
{
public:
    static string AddBinary(string a, string b)
    {
        if (b.empty())
        {
            return a;
        }

        string res;

        int aLen = a.size()-1;
        int bLen = b.size() -1;
        int carry = 0;
        while(aLen >=0 || bLen >= 0)
        {
            int aBinary = 0;
            int bBinary = 0;
            if(aLen >= 0)
            {
                aBinary = (int)(a[aLen] - '0');
                aLen--;
            }

            if(bLen >= 0)
            {
                bBinary = (int)(b[bLen] - '0');
                bLen--;
            }

            int adder = aBinary + bBinary + carry;

            carry = adder / 2;
            int left = adder % 2;
            char aChar = '0' + left;
            res.insert(res.begin(), aChar);

        }

        if(carry != 0)
        {
            char aChar = '0' + carry;
            res.insert(res.begin(), aChar);
        }

        return res;
    }
};

#endif