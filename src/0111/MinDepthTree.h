/**
 * @file MinDepthTree.h
 * @brief 
 * Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Note: A leaf is a node with no children.
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-07
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _MINDEPTHTREE_H_
#define _MINDEPTHTREE_H_

#include "../TreeNode.h"
#include <climits>
#include <queue>

using namespace std;

class MinDepthTreeClass
{

public:



    static int minDepth(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }

        if(root->left == nullptr && root->right == nullptr)
        {
            return 1;
        }

        int leftHeight = INT_MAX;
        if(root->left != nullptr)
        {
            leftHeight = minDepth(root->left) + 1;
        }

        int rightHeight = INT_MAX;
        if(root->right != nullptr)
        {
            rightHeight = minDepth(root->right) + 1;
        }


        return leftHeight < rightHeight ? leftHeight : rightHeight;

    }

    static int minDepth2(TreeNode* root)
    {
        if(root==nullptr)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        int depth=0;
        while(!q.empty())
        {
            int c=q.size();
            while(c--)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(!temp->right && !temp->left)
                    return 1+depth;
                if(temp->right)
                    q.push(temp->right);
                if(temp->left)
                    q.push(temp->left);
            }
            depth++;
        }
        return depth+1;
    }
};



#endif