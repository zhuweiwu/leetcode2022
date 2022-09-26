/**
 * @file LongestSamePrefix.h
 * @brief 
 * Write a function to find the longest common prefix string amongst an array of strings.

    If there is no common prefix, return an empty string "".
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _LONGESTSAMEPREFIX_H_
#define _LONGESTSAMEPREFIX_H_

#include<string>
#include<vector>

using namespace std;

class LongestSamePrefixClass
{

public:
    static string LongestCommonPrefix(vector<string>& strs)
    {
        if(strs.size() == 0)
        {
            return "";
        }
        string res = "";
        int endIndex = -1;

        int count = strs.size();
        int firstStrLen = strs[0].length();
        

        for(int i = 0; i<firstStrLen; i++)
        {
            char checkChar = strs[0][i];
            for(int j = 1; j < count; j++)
            {
                if(i >= strs[j].size())
                {
                    return res;    
                }
                else
                {
                    if(checkChar != strs[j][i])
                    {
                        return res;
                    }
                }
            }
            res.push_back(checkChar);
        }
    
        return res;
    }
};



#endif