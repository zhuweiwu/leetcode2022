/**
 * @file MaxTreeDepth.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-02
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _MAXTREEDEPTH_H_
#define _MAXTREEDEPTH_H_

#include "../TreeNode.h"

class MaxTreeDepth
{
public:
    static int maxDepth(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }

        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);

        return leftHeight > rightHeight ? leftHeight+1 : rightHeight+1;
    }
};




#endif