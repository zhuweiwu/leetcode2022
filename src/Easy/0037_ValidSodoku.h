/**
 * @file ValidSodoku.h
 * @brief
 * Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be
 validated according to the following rules:

    Each row must contain the digits 1-9 without repetition.
    Each column must contain the digits 1-9 without repetition.
    Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9
 without repetition.
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-05-25
 *
 * @copyright Copyright (c) 2022  Zhuwei Wu
 *
 */

#ifndef _VALIDSODOKU_H_
#define _VALIDSODOKU_H_

#include <vector>

using namespace std;

class ValidSodokuClass {

public:
  /**
   * @brief
   *  9*9
   *
   * @param  board            My Param doc
   * @return true
   * @return false
   */
  static bool IsValidSudoku(vector<vector<char>> &board) {
    // check board
    //?????

    // check row and 3*3
    int totalRowNum = board.size();
    for (int row = 0; row < totalRowNum; row++) {
      vector<char> rowBoard = board[row];
      bool chechNumber[9] = {false};
      for (int i = 0; i < rowBoard.size(); i++) {
        if (rowBoard[i] == '.') {
          continue;
        }
        int digit = (int)(rowBoard[i] - '0');
        if (chechNumber[digit - 1]) {
          return false;
        } else {
          chechNumber[digit - 1] = true;
        }
      }
    }

    // check column
    int totalColumnNum = board[0].size();

    for (int j = 0; j < totalColumnNum; j++) {
      bool chechNumber[9] = {false};
      for (int i = 0; i < board.size(); i++) {
        if (board[i][j] == '.') {
          continue;
        }

        int digit = (int)(board[i][j] - '0');

        if (chechNumber[digit - 1]) {
          return false;
        } else {
          chechNumber[digit - 1] = true;
        }
      }
    }

    // check 3 * 3

    for (int i = 0; i < board.size() - 2; i = i + 3) {
      for (int j = 0; j < board[0].size() - 2; j = j + 3) {
        bool chechNumber[9] = {false};
        for (int m = i; m <= i + 2; m++) {
          for (int n = j; n <= j + 2; n++) {
            if (board[n][m] == '.') {
              continue;
            }

            int digit = (int)(board[n][m] - '0');
            if (chechNumber[digit - 1]) {
              return false;
            } else {
              chechNumber[digit - 1] = true;
            }
          }
        }
      }
    }

    return true;
  }
};

#endif