
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;

        if(root==NULL) return ans;
        st.push(root);

        while(!st.empty()){
            TreeNode* t=st.top();
            st.pop();

            ans.push_back(t->val);

            if(t->right){
                st.push(t->right);
            }

            if(t->left){
                st.push(t->left);
            }
        }

        return ans;
    }
};