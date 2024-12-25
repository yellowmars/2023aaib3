class Solution {
public:
    void helper(TreeNode*root,vector<int>& ans){//函式呼叫函式
        if(root==nullptr) return;//終止條件 teminal condition
        helper(root->left,ans);//左半邊
        ans.push_back(root->val);//塞中間
        helper(root->right,ans);//右半邊
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;//準備答案(伸縮自如的陣列)
        helper(root,ans);//函式呼叫函式 幫我們把答案算出來，塞入ans
        return ans;//答案送出去
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */