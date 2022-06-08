/**
 * @file PathSum.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-07
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _PATHSUM_H_
#define _PATHSUM_H_

#include "../TreeNode.h"

class PathSum
{
public:
   
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr)
        {
            return false;
        }

        int left = targetSum - root->val;

        if(root->left == nullptr && root->right == nullptr && left == 0)
        {
            return true;
        }

        return hasPathSum(root->left, left) || hasPathSum(root->right, left);
    }
};



#endif