
class Solution {
public:

    int height(TreeNode* root){

        if(root==NULL) return 0;

        int left=height(root->left);
        int right=height(root->right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL) return 0;
        int left=diameterOfBinaryTree(root->left);
        int right=diameterOfBinaryTree(root->right);
        int curr=height(root->left)+height(root->right);

        return max(left,max(right,curr));
    }
};