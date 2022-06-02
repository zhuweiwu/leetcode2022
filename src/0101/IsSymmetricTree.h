/**
 * @file IsSymmetricTree.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _ISSYMMETRICTREE_H_
#define _ISSYMMETRICTREE_H_

#include "../TreeNode.h"

class IsSymmetricTreeClass
{
public:

    static bool isSymmetric(TreeNode* left, TreeNode* right)
    {
        if(left == nullptr && right == nullptr)
        {
            return true;
        }

        if(left == nullptr && right != nullptr)
        {
            return false;
        }

        if(left != nullptr && right == nullptr)
        {
            return false;
        }

        if(left->val != right->val)
        {
            return false;
        }

        return isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left);

    }

    static bool isSymmetric(TreeNode* root) {
        if(root == nullptr)
        {
            return false;
        }

        if(root->left == nullptr && root->right == nullptr)
        {
            return true;
        }

        return isSymmetric(root->left, root->right);
    }
};


#endif