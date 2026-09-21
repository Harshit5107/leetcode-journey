
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        
        int maxWidth=0;
        queue<pair<TreeNode*,unsigned long long>> q;
        
        q.push({root,0});

        while(!q.empty()){
            unsigned long long start=q.front().second;
            unsigned long long  end=q.back().second;
            maxWidth=max(maxWidth,(int)(end-start+1));
            int size=q.size();

            for(int i=0;i<size;i++){
                 unsigned long long curr=q.front().second;
                TreeNode* node=q.front().first;
                q.pop();
                if(node->left){
                    q.push({node->left,2*curr+1});
                }
                if(node->right){
                    q.push({node->right,2*curr+2});
                }

            }
        }

        return maxWidth;
    }
};