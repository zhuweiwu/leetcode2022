/**
 * @file PascalTriangle.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-07
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _PASCALTRIANGLE_H_
#define _PASCALTRIANGLE_H_

#include <vector>

using namespace std;

class PascalTriangle
{
public:
    static vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows == 0)
        {
            return res;
        }

        for(int i =0; i <numRows; i++)
        {
            vector<int> row;

            if(i == 0)
            {
                row.push_back(1);
                res.push_back(row);
                continue;
            }

            for(int j = 0; j <= i; j++)
            {
                if(j == 0 )
                {
                    row.push_back(1);
                    //error !!!!!!!!!!! push_back is copy
                    //res.push_back(row);
                }
                else if( j== i)
                {
                    row.push_back(1);
                }
                else
                {
                    int add = res[i-1][j-1] + res[i-1][j];
                    row.push_back(add);
                }
            }

            res.push_back(row);
        }

        return res;
    }
};

#endif