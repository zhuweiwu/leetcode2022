/**
 * @file PlusOne.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _PLUSONE_H_
#define _PLUSONE_H_

#include<vector>
using namespace std;

class PlusOneClass
{

public:
    static vector<int> PlusOne(vector<int>& digits)
    {
        vector<int> res;
        if(digits.size() == 0)
        {
            res.push_back(1);
            return res;
        }


        int carry = 1;
        for(int i = digits.size()-1; i>=0; i--)
        {
            int add = digits[i] + carry;
            if(add == 10)
            {
                res.insert(res.begin(),0);
                carry = 1;
            }
            else
            {
                res.insert(res.begin(),add);
                carry = 0;
            }
        }

        if(carry == 1)
        {
            res.insert(res.begin(), carry);
        }

        return res;
        

    }

};


#endif