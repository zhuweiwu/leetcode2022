/**
 * @file PascalTriangle2.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-07
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _PASCALTRIANGLE2_H_
#define _PASCALTRIANGLE2_H_

#include<vector>

using namespace std;

class PascalTriangle2
{

public:
    vector<int> getRow(int rowIndex) {
        vector<int> record;
        vector<int> res;

        for(int i = 0; i<=rowIndex; i++)
        {
            if(i == 0)
            {
                res.push_back(1);
                record = res;
            }
            else
            {
                res.clear();
                for(int j = 0; j <= i ; j++)
                {
                    if(j == 0 || j == i)
                    {
                        res.push_back(1);
                    }
                    else
                    {
                        res.push_back((record[j-1] + record[j]));
                    }
                }
                record = res;
            }

        }
        
        return res;
    }
};


#endif