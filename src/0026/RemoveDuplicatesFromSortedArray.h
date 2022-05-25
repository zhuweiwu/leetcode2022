/**
 * @file RemoveDuplicatesFromSortedArray.h
 * @brief 
 * Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 * 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _REMOVEDUPLICATESFROMSORTEDARRAY_H_
#define _REMOVEDUPLICATESFROMSORTEDARRAY_H_

#include <vector>

using namespace std;

class RemoveDuplicatesFromSortedArrayClass
{
public:
    /**
     * @brief too slow
     * @param  nums             My Param doc
     * @return int 
     */
    static int RemoveDuplicates_slow(vector<int>& nums)
    {
        

        int len = nums.size();

        if(len <= 1)
        {
            return len;
        }

        int prevVal = nums[0];
        int uniqueCount = 1;

        for(int i = 1; i < nums.size(); i++)
        {
            if(prevVal == nums[i])
            {
                nums.erase(nums.begin() + i);
                i--;
            }
            else
            {
                prevVal = nums[i];
                uniqueCount++;
            }
        }
        return uniqueCount;
    }
   
    static int RemoveDuplicates(vector<int>& nums)
    {
        int len = nums.size();

        if(len <= 1)
        {
            return len;
        }

        int pos = 0;

        for(int i = 1; i < len; i++)
        {
            if(nums[pos] != nums[i])
            {
                pos++;
                nums[pos] = nums[i];
            }
        }

        return pos+1;

    }
};




#endif