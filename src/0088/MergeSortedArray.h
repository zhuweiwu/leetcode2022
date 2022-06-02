/**
 * @file MergeSortedArray.h
 * @brief 
 * You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
 * and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, 
but instead be stored inside the array nums1. 
To accommodate this, nums1 has a length of m + n, 
where the first m elements denote the elements that should be merged, 
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */
#ifndef _MERGESORTEDARRAY_H_
#define _MERGESORTEDARRAY_H_

#include<vector>

using namespace std;

class MergeSortedArrayClass
{

public:
    static void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        if(n == 0)
        {
            return;
        }    

        int i = 0, j = 0;

        vector<int> combines;

        while(i < m || j < n)
        {
            if(i == m)
            {
                combines.push_back(nums2[j]);
                j++; 
                continue;
            }

            if(j == n)
            {
                combines.push_back(nums1[i]);
                i++; 
                continue;
            }

            if(nums1[i] <= nums2[j])
            {
                combines.push_back(nums1[i]);
                i++;
            }
            else
            {
                combines.push_back(nums2[j]);
                j++;
            }
        }

        for(int k = 0; k < combines.size(); k++)
        {
            nums1[k] = combines[i];
        }

    }
};




#endif