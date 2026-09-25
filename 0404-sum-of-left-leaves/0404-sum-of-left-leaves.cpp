
class Solution {
public:

    void pre(TreeNode* root,int& sum){
        if(root==NULL) return;
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL){
            sum+=root->left->val;
        }

        pre(root->left,sum);
        pre(root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        pre(root,sum);

        return sum;
    }
};