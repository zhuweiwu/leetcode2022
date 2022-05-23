/**
 * @file CheckEqual.h
 * @brief check equal for vector
 * 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-22
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _CHECKEQUAL_H_
#define _CHECKEQUAL_H_

#include<vector>

using namespace std;

class CheckEqual
{

public:
    static bool CheckVector(const vector<int>& lv, const vector<int>& rv)
    {
        if(lv.size() != rv.size())
        {
            return false;
        }

        int size = lv.size();
        for(int i=0; i < size; i++)
        {
            if(lv[i] != rv[i])
            {
                return false;
            }
        }
        return true;
    }
};




#endif