/**
 * @file TwoSumClass.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-22
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _TWOSUM_H_
#define _TWOSUM_H_

#include<vector>
#include<map>

using namespace std;

class TwoSumClass
{

public:
    /**
    * @brief 
    * @param  nums             My Param doc
    * @param  target           My Param doc
    * @return vector<int> 
    */
    static vector<int> TwoSum(vector<int>& nums, int target);
};

/**
 * @brief 
 * @param  nums             source numbers
 * @param  target           two sum target
 * @return vector<int> index of two number
 */
vector<int> TwoSumClass::TwoSum(vector<int>& nums, int target)
{
    vector<int> res;
    if(nums.size() < 2)
    {
        return res;
    }
    int size = nums.size();
    map<int,int> record;//key:num ,value:index
    for(int i = 0; i < size; i++)
    {
        if(record.find(target-nums[i]) != record.end())
        {
            
            res.push_back(record[target-nums[i]]);
            res.push_back(i);
            break;
        }
        else
        {
            record[nums[i]] = i;
        }
    }

    return res;
}



#endif