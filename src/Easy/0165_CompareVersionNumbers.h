/**
 * @file CompareVersionNumbers.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef COMPAREVERSIONNUMBERS_H
#define COMPAREVERSIONNUMBERS_H

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;


class CompareVersionNumbers
{

public:
    static vector<int> split(const string& src, char delim)
    {
        vector<int> res;
        stringstream ss;
        ss << src;
        string s;
        while(getline(ss, s, delim))
        {
            res.push_back(atoi(s.c_str()));
        }
        return res;
    }

    /**
     * @brief 
     *  rule: version1 < version2 return -1
     *          version1 > version2 return 1
     *          version1 == version2 return 0
     * @param version1 
     * @param version2 
     * @return int 
     */
    static int compareVersion(string version1, string version2) {
        vector<int> v1 = split(version1, '.');
        vector<int> v2 = split(version2, '.');

        int v1Len = v1.size();
        int v2Len = v2.size();

        int index = 0;

        while(index < v1Len || index < v2Len)
        {
            if(index < v1Len && index < v2Len)
            {
                if(v1[index] < v2[index])
                {
                    return -1;
                }
                else if(v1[index] > v2[index])
                {
                    return 1;
                }
            }

            if(index >= v1Len && index < v2Len)
            {
                if(v2[index] != 0)
                {
                    return -1;
                }
            }

            if(index >= v2Len && index < v1Len)
            {
                if(v1[index] != 0)
                {
                    return 1;
                }
            }

            index++;

        }
        
        return 0;
    }
};



#endif



