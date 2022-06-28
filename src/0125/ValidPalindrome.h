/**
 * @file ValidPalindrome.h
 * @brief 
 * Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-15
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _VALIDPALINDROME_H_
#define _VALIDPALINDROME_H_

#include <string>

using namespace std;

class ValidPalindrome
{
public:

    

    static bool isPalindrome(string s) {
        if(s.empty())
        {
            return false;
        }

        int front = 0;
        int end = s.size() -1 ;

        for(; front < end;)
        {
            char cfront = tolower(s[front]);
            if(!(isdigit(cfront)) && !(isalpha(cfront)) )
            {
                front++;
                continue;
            }

            char cend = tolower(s[end]);
            if(!(isdigit(cend)) && !(isalpha(cend)) )
            {
                end--;
                continue;
            }

            if(cfront != cend)
            {
                return false;
            }

            front++;
            end--;

        }


        return true;

    }
};



#endif