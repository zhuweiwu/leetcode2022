/**
 * @file MinStack.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _MINSTACH_H_
#define _MINSTACH_H_

#include <stack>
using namespace std;

class MinStack
{
public:
    MinStack() 
    {
        
    }

    ~MinStack()
    {

    }
    
    void push(int val) 
    {
        if(nStack.empty())
        {
            int* pair = new int[2]{val, val};
            nStack.push(pair);
        }
        else
        {
            int* toppair = nStack.top();
            if(toppair[1] > val)
            {
                int* pair = new int[2]{val, val};
                nStack.push(pair);
            }
            else
            {
                int* pair = new int[2]{val, toppair[1]};
                nStack.push(pair);  
            }
        }
       
    }
    
    void pop() {
        int* toppair = nStack.top();
        nStack.pop();
        delete[] toppair;
    }
    
    int top() {
        int* toppair = nStack.top();
        return toppair[0];
    }
    
    int getMin() {
         int* toppair = nStack.top();
        return toppair[1];
    }
private:
    stack<int*> nStack;
};




#endif