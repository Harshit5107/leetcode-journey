
class Solution {
public:

    int height(TreeNode* root,int& ans){

        if(root==NULL) return 0;

        int left=height(root->left,ans);
        int right=height(root->right,ans);
        ans=max(ans,left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL) return 0;
        int ans=0;
        int t=height(root,ans);

        return ans;
    }
};