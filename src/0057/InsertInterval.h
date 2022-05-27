/**
 * @file InsertInterval.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _INSERTINTERVAL_H_
#define _INSERTINTERVAL_H_

#include <vector>

using namespace std;

class InsertIntervalClass
{

public:
    static vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> res;
        if(intervals.size() == 0)
        {
            res.push_back(newInterval);
            return res;
        }

        vector<int> temp = newInterval;

        for(int i =0; i < intervals.size(); i++)
        {
            if(intervals[i][0] > temp[1])
            {
                res.push_back(temp);
                temp = intervals[i];
            }
            else if(intervals[i][1] < temp[0])
            {
                res.push_back(intervals[i]);
            }
            else
            {
                if(temp[0] > intervals[i][0])
                {
                    temp[0] = intervals[i][0];
                }

                if(temp[1] < intervals[i][1])
                {
                    temp[1] = intervals[i][1];
                }
            }
        }

        res.push_back(temp);

        return res;


    }

};


#endif