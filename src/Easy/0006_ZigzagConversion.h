/**
 * @file ZigzagConversion.h
 * @brief 
* The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: 
* (you may want to display this pattern in a fixed font for better legibility)
* 
* P   A   H   N
* A P L S I I G
* Y   I   R
* 
* And then read line by line: "PAHNAPLSIIGYIR"
* 
* Write the code that will take a string and make this conversion given a number of rows:
* 
* string convert(string text, int nRows);
* 
* convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".

 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-23
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _ZIGZAGCONVERSION_H_
#define _ZIGZAGCONVERSION_H_


#include<string>
#include<vector>

using namespace std;

class ZigzagConversionClass
{

public:
    static string Convert(string& s, int numRows)
    {
        //check boundary condition
        if(s.length() <= numRows || numRows <= 1)
        {
            return s;
        }

        vector<string> lines(numRows);
        int strLen = s.length();
        int curRow =0;
        bool dir = true;
        for(int i= 0; i < strLen; i++)
        {
            if(curRow == 0)
            {
                lines[curRow] += s[i];
                dir = true;
            }
            else if(curRow == numRows - 1)
            {
                lines[curRow] += s[i];
                dir = false;
            }
            else
            {
                lines[curRow] += s[i];
            }

            if(dir)
            {
                curRow++;
            }
            else
            {
                curRow--;
            }
        }

        string res;
        for(string line : lines)
        {
            res.append(line);
        }

        return res;

    }
};




#endif