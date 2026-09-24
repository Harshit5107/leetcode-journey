
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL) return 0;

        while(!q.empty()){
            int size=q.size();
            vector<int> temp;

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();

                temp.push_back(node->val);

                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }

            ans.push_back(temp);
        }


        return ans[ans.size()-1][0];

    }
};