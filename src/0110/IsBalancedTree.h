/**
 * @file IsBalancedTree.h
 * @brief 
 * 
 * 
 *  more easy code !!!!!!!!!!!!!!
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        if (h(root) == -1) return false;
        
        return true;
    }
    
    int h(TreeNode* node) {
        if (node == nullptr) return 0;
        int l, r;
        l = h(node->left);
        r = h(node->right);
        
        if (l == -1 || r == -1) return -1;
        if (abs(l-r) > 1) return -1;
        
        return (1 + max(l, r));
    }

 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-04
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _ISBALANCEDTREE_H_
#define _ISBALANCEDTREE_H_

#include "../TreeNode.h"

class IsBalancedTreeClass
{

public:
    static int GetHeight(TreeNode* node)
    {
        if(node == nullptr)
        {
            return 0;
        }

        int leftHeight = GetHeight(node->left);
        int rightHeight = GetHeight(node->right);

        return leftHeight>rightHeight? leftHeight+1 : rightHeight+1;
    }

    static int HeightDiff(TreeNode* left, TreeNode* right)
    {
        int leftHeight = GetHeight(left);
        int rightHeight = GetHeight(right);

        int diff = leftHeight - rightHeight;

        if(diff > 1 || diff < -1)
        {
            return false;
        }

        if(left == nullptr || right == nullptr)
        {
            return true;
        }

        bool res = HeightDiff(left->left, left->right) && HeightDiff(right->left, right->right);

        return res;
        
    }

    static bool isBalanced(TreeNode* root) {
        if(root == nullptr){return true;}

        return HeightDiff(root->left, root->right);

    }
};


#endif