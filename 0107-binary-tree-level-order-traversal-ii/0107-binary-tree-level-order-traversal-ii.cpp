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
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        stack<vector<int>> temp;
        vector<vector<int>> ans;
        if(root==NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            int size=q.size();
            vector<int> t;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                t.push_back(node->val);

                if(node->left){
                    q.push(node->left);
                }

                if(node->right){
                    q.push(node->right);
                }
            }

            temp.push(t);
        }

        while(!temp.empty()){
            ans.push_back(temp.top());
            temp.pop();
        }

        return ans;
    }
};