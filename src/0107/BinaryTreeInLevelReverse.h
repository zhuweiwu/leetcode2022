/**
 * @file BinaryTreeInLevelReverse.h
 * @brief 
 * @author zhuwei wu (wuzhuweizzx@gmail.com)
 * @version 1.0
 * @date 2022-06-02
 * 
 * @copyright Copyright (c) 2022  Zhuwei Wu
 * 
 */

#ifndef _BINARYTREEINLEVELREVERSE_H_
#define _BINARYTREEINLEVELREVERSE_H_

#include<vector>
#include"../TreeNode.h"
#include<queue>
#include <algorithm>

using namespace std;

class BinaryTreeInLevelReverseClass
{

public:
    static vector<vector<int>> levelOrderBottom(TreeNode* root) {
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

        //reverse
        reverse(res.begin(), res.end());

        return res;
    }
};


#endif