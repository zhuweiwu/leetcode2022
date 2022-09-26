/**
 * @file StringToInteger.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-23
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _STRINGTOINTEGER_H_
#define _STRINGTOINTEGER_H_

#include <string>
#include <climits>

using namespace std;

class StringToIntegerClass
{

public:
    /**
     * @brief  Not Faster
     * @param  s                My Param doc
     * @return int 
     */
    static int StringToInteger(string s)
    {
        long res = 0;
        bool isNeg = false;
        bool hasDigit = false;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '-' && !hasDigit)
            {
                isNeg = true;
                hasDigit = true;
                continue;
            }
            else if(s[i] == '+' && !hasDigit)
            {
                isNeg = false;
                hasDigit = true;
                continue;
            }
            else if(s[i] >= '0' && s[i] <= '9')
            {
                hasDigit = true;
                res = res * 10 + (int)(s[i] - '0');

                if(!isNeg && res > INT_MAX)
                {
                    return INT_MAX;
                    
                }

                if( isNeg && -res < INT_MIN)
                {
                    return INT_MIN;
                }

            }
            else
            {
                if(!hasDigit && s[i] == ' ')
                {
                    continue;
                }
                
                break;
            }
        }

        return isNeg ? -res : res; 
    }    


    static int StringToInteger2(string s)
    {
        
    }
};




#endif