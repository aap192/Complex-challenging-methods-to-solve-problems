//============================================================================
// Name        : PathSumII.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Path Sum II in C++, Ansi-style
//============================================================================

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        vector<int> V;
        
        helper(root, ans, V, 0, sum);
        
        return ans;
    }
    
    void helper(TreeNode* root, vector<vector<int>>& ans, vector<int>& V, int csum, int sum)
    {
        if(root == NULL)
            return;
        else
        {
            V.push_back(root->val);
            csum += root->val;
            if(root->left == NULL && root->right == NULL && csum == sum)
                ans.push_back(V);
            helper(root->left, ans, V, csum, sum);
            helper(root->right, ans, V, csum, sum);
            V.pop_back();   
        }
    }
};

