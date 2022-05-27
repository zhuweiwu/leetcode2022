/**
 * @file CountAndSay.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _COUNTANDSAY_H_
#define _COUNTANDSAY_H_

#include<string>
#include<vector>
using namespace std;

class CountAndSayClass
{
public:
    static string CountAndSay(int n)
    {
        if(n == 1)
        {
            return "1";
        }

        string res = "1";
        n--;
        vector<vector<int>> record;
        
        while(n !=0)
        {
            //string to count 
            for(int i = 0; i < res.length();i++)
            {
                if(record.size() == 0)
                {
                    int curNumber = (int)(res[i]- '0');
                    vector<int>temp = {curNumber, 1};
                    record.push_back(temp);
                }
                else
                {
                    int curNumber = (int)(res[i]- '0');
                    if(record[record.size()-1][0] == curNumber)
                    {
                        record[record.size()-1][1]++;
                    }
                    else
                    {
                        vector<int>temp = {curNumber, 1};
                        record.push_back(temp);
                    }
                }
                
            }

            //record to string
            res.clear();
            for (size_t i = 0; i < record.size(); i++)
            {
                /* code */
                res.append(to_string(record[i][0]));
                res.append(to_string(record[i][1]));
            }
            record.clear();
            n--;
        }
        return res;
    }

};



#endif