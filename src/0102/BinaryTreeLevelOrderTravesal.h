/**
 * @file BinaryTreeLevelOrderTravesal.h
 * @brief 
 * Given the root of a binary tree, return the level order traversal of its nodes' values. 
 * (i.e., from left to right, level by level).
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-02
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _BINARYTREELEVELORDERTRAVESAL_H_
#define _BINARYTREELEVELORDERTRAVESAL_H_

#include<vector>
#include<queue>
#include"../TreeNode.h"

using namespace std;

class BinaryTreeLevelOrderTravesalClass
{
public:
    static int GetTreeHeight(TreeNode* node)
    {
        if(node == nullptr)
        {
            return 0;
        }

        int leftHeight = GetTreeHeight(node->left);
        int rightHeight = GetTreeHeight(node->right);

        return leftHeight>rightHeight? leftHeight+1 : rightHeight+1;
    }

    static void LevelOrderHelper(TreeNode* root, vector<int> &levelRes, int level)
    {

        if(root == nullptr)
        {
            return;
        }

        if(level == 0)
        {
            levelRes.push_back(root->val);
            return;
        }

        LevelOrderHelper(root->left, levelRes, level-1);
        LevelOrderHelper(root->right, levelRes, level-1);
    }


    static vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> res;
        if(root == nullptr)
        {
            res.push_back({});
            return res;
        }

        int height = GetTreeHeight(root);

        for(int i =0; i < height; i++)
        {
            vector<int> levelRes;
            LevelOrderHelper(root, levelRes, i);
            res.push_back(levelRes);
        }

        return res;

    }

    /**
     * @brief BFS
     * @param  root             My Param doc
     * @return vector<vector<int>> 
     */
    static vector<vector<int>> levelOrder2(TreeNode* root) {
        if (root == nullptr) return {};
		
		// Initialize
        vector<vector<int>> res;
        queue <TreeNode*> q;
		// Add to start search
        q.push(root);
		
		// BFS
        while (!q.empty()) {
            vector<int> lvl;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* cur = q.front();
                q.pop();
				// Push visited value to current level vector
                lvl.push_back(cur -> val);
                if (cur -> left) q.push(cur -> left);
                if (cur -> right) q.push(cur -> right);
            }
			// After all nodes on level have been found, append to result vector
            res.push_back(lvl);
        }
        return res;
    }
};



#endif