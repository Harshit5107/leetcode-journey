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

void pre(TreeNode* head,vector<int>& nums){
    if(head==nullptr) return;

    nums.push_back(head->val);
    pre(head->left,nums);
    pre(head->right,nums);
}

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nums;

        
        pre(root,nums);
        return nums;
    }
};