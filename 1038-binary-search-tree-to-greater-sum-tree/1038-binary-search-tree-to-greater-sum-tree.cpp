
class Solution {
public:

    void post(TreeNode* root,int& sum){
        if(root==NULL) return;

        post(root->right,sum);
        sum+=root->val;
        root->val=sum;
        post(root->left,sum);
        

    }
    TreeNode* bstToGst(TreeNode* root) {
        
        int sum=0;
        post(root,sum);
        return root;

    }
};