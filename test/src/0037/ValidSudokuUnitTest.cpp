#include "gtest/gtest.h"
#include <string>
#include "../../../src/0037/ValidSodoku.h"
#include <vector>
#include "../CheckEqual.h"

TEST(ValidSudokuUnitTest, Test1)
{
    /*  
    [['5','3','.','.','7','.','.','.','.'],
    ['6','.','.','1','9','5','.','.','.'],
    ['.','9','8','.','.','.','.','6','.'],
    ['8','.','.','.','6','.','.','.','3'],
    ['4','.','.','8','.','3','.','.','1'],
    ['7','.','.','.','2','.','.','.','6'],
    ['.','6','.','.','.','.','2','8','.'],
    ['.','.','.','4','1','9','.','.','5'],
    ['.','.','.','.','8','.','.','7','9']]
    */
    vector<vector<char>> board;

    vector<char> row {'5','3','.','.','7','.','.','.','.'};
    board.push_back(row);

    vector<char> row1 {'6','.','.','1','9','5','.','.','.'};
    board.push_back(row1);

    vector<char> row2 {'.','9','8','.','.','.','.','6','.'};
    board.push_back(row2);

    vector<char> row3 {'8','.','.','.','6','.','.','.','3'};
    board.push_back(row3);

    vector<char> row4 {'4','.','.','8','.','3','.','.','1'};
    board.push_back(row4);

     vector<char> row5 {'7','.','.','.','2','.','.','.','6'};
    board.push_back(row5);

     vector<char> row6 {'.','6','.','.','.','.','2','8','.'};
    board.push_back(row6);

     vector<char> row7 {'.','.','.','.','8','.','.','7','9'};
    board.push_back(row7);

    vector<char> row8 {'.','.','.','4','1','9','.','.','5'};
    board.push_back(row8);

    
    bool isValid = ValidSodokuClass::IsValidSudoku(board);

    EXPECT_TRUE(isValid);
    
}