/**
 * @file LengthLastWord.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _LENGTHLASTWORD_H_
#define _LENGTHLASTWORD_H_

#include <string>

using namespace std;

class LengthLastWordClass
{

public:
    static int LengthOfLastWord(string s)
    {
        int len = s.size();

        int wordLen = 0;
        for(int i = len-1; i >=0; i--)
        {
            if(s[i] == ' ')
            {
                if(wordLen != 0)
                {
                    break;
                }
                continue;
            }
            else
            {
                wordLen++;
            }

        }

        return wordLen;
    }
    
};


#endif