/**
 * @file 0169_MajorityElements.h
 * @author zhuwei (wuzhuweizzx@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 #ifndef MAJORITYELEMENTS_H
 #define MAJORITYELEMENTS_H

 #include <algorithm>
#include <unordered_map>
#include <vector>

 using namespace std;
 
 class MajorityElements{

public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> times;

        for(auto item : nums)
        {
            if(times.find(item) == times.end())
            {
                times[item] = 1;
            }
            else {
                times[item]++;
            }

            if(times[item] >= nums.size())
            {
                return item;
            }
            
        }

        return 0;
    }

    int majorityElement2(vector<int>& nums) {
        int majorElement = 0;
        int count = 0;

        for(auto &item : nums)
        {
            if(count == 0)
            {
                majorElement = item;
                count++;
                continue;
            }

            if(majorElement != item)
            {
                count--;
            }
            else {
            count++;
            }
        }

        return majorElement;
    }


    int majorityElement3(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        return nums[nums.size() / 2];
    } 

 };
 
 
 #endif