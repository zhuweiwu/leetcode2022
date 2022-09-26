/**
 * @file 0168_ExcelColunmToTitle.h
 * @author zhuwei (wuzhuweizzx@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-09-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef EXCELCOLUNMTOTITLE_H
#define EXCELCOLUNMTOTITLE_H

#include <string>

using namespace std;

class ExcelColumnToTitle {
public:
  static string convertToTitle(int columnNumber) {
    string ret = "";

    if (columnNumber <= 0) {
      return ret;
    }

    int a = 'A';

    while (columnNumber != 0) {
      int left = columnNumber % 26;
      if (left == 0) {
        ret = 'Z' + ret;
        columnNumber = columnNumber / 26 -1;
      } else {
        ret = (char)(left - 1 + a) + ret;
        columnNumber = columnNumber / 26;
      }
    }
    return ret;
  }
};

#endif