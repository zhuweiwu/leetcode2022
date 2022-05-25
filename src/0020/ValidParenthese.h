/**
 * @file ValidParenthese.h
 * @brief 
 * Given a string s containing just the characters 
 * '(', ')', '{', '}', '[' and ']', 
 * determine if the input string is valid.
 * 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _VALIDPARENTHESE_H_
#define _VALIDPARENTHESE_H_

#include<string>
#include <stack>

using namespace std;

class ValidParentheseClass
{

public:
    static bool isValid(string s) 
    {
        if(s.size() == 0)
        {
            return false;
        }

        stack<char> storedItem;
        char top;

        for(auto iter = s.begin(), end = s.end(); iter != end; iter++)
        {
            switch(*iter)
            {
                case '(':
                case '[':
                case '{':
                    storedItem.push(*iter);
                    break;
                case ')':
                    if(storedItem.empty())
                    {
                        return false;
                    }

                    top = storedItem.top();
                    storedItem.pop();
                    if(top != '(')
                    {
                        return false;
                    }
                    break;
                case ']':
                    if(storedItem.empty())
                    {
                        return false;
                    }

                     top = storedItem.top();
                     storedItem.pop();
                    if(top != '[')
                    {
                        return false;
                    }
                    break;
                case '}':
                    if(storedItem.empty())
                    {
                        return false;
                    }

                     top = storedItem.top();
                     storedItem.pop();
                    if(top != '{')
                    {
                        return false;
                    }
                    break;
                default:
                    return false;             
            }
        }

        if(storedItem.size() != 0)
        {
            return false;
        }

        return true; 

    }

};



#endif