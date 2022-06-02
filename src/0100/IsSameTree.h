/**
 * @file IsSameTree.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _ISSAMETREE_H_
#define _ISSAMETREE_H_

#include "../TreeNode.h"

class IsSameTreeClass
{
public:
    static bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr  && q != nullptr)
        {
            return false;
        }

        if(p != nullptr && q == nullptr)
        {
            return false;
        }

        if(p == nullptr && q == nullptr)
        {
            return true;
        }

        if(p->val != q->val)
        {
            return false;
        }

        bool isLeftSame = isSameTree(p->left, q->left);
        bool isRightSame = isSameTree(p->right, q->right);


        return isLeftSame && isRightSame;

    }
};


#endif