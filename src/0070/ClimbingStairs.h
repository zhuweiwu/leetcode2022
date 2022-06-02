/**
 * @file ClimbingStairs.h
 * @brief 
 * You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */
#ifndef _CLIMBINGSTAIRS_H_
#define _CLIMBINGSTAIRS_H_


class ClimbingStairsClass
{

public:
    static int ClimbStairs(int n)
    {
        if(n < 2)
        {
            return 1;
        }

        int record[2] = {1,1};

        for(int i = 2; i <= n; i++)
        {
            int temp = record[0] + record[1];
            record[0] = record[1];
            record[1] = temp;
        }

        return record[1];

    }
};



#endif