
class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;
        if(root==NULL) return 0;
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            int k=1;

            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                }

                if(node->right){
                    q.push(node->right);
                }
            }

            ans.push_back(k);

        }

        return ans.size();
    }
};