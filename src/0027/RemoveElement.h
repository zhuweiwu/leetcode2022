/**
 * @file RemoveElement.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-25
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _REMOVEELEMENT_H_
#define _REMOVEELEMENT_H_

#include<vector>

using namespace std;


class RemoveElementClass
{

public:
    static int RemoveElement(vector<int>& nums, int val)
    {
        if(nums.size() < 1)
        {
            return 0;
        }

        int len = nums.size();
        int removeCount = 0;


        for(int i = 0; i < len; i++)
        {
            if(nums[i] == val)
            {
                removeCount++;
            }
            else
            {
                nums[i-removeCount] = nums[i];
            }
        }

        return len-removeCount;
    }

    
};



#endif