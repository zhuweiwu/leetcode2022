/**
 * @file ImplementStrStr.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-25
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _IMPLEMENTSTRSTR_H_
#define _IMPLEMENTSTRSTR_H_


#include<string>

using namespace std;

class ImplementStrStrClass
{

public:
    static int StrStr(string haystack, string needle)
    {
        if(haystack.size() == 0 || needle.size() == 0 || haystack.size() < needle.size())
        {
            return -1;
        }

        int haylen = haystack.size();
        int needleLen = needle.size();

        for(int i = 0; i < haylen; i++)
        {
            bool isSame = true;
            for(int j =0; j < needleLen; j++)
            {
                if(i+j > haylen-1)
                {
                    return -1;
                }

                if(haystack[i+j] != needle[j])
                {
                    isSame = false;
                    break;
                }
            }

            if(isSame)
            {
                return i;
            }

        }

        return -1;
    }
};


#endif