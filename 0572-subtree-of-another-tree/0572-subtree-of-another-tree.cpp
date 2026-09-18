class Solution {
public:

    bool identical(TreeNode* p,TreeNode* q){

        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL){
            return false;
        }

        if(p->val!=q->val) return false;

        return identical(p->left,q->left) && identical(p->right,q->right);;
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(root==NULL || subRoot==NULL) return root==subRoot;
        if(root->val==subRoot->val){
            bool ans= identical(root,subRoot);
            if(ans) return true;
        }

        return isSubtree(root->left,subRoot)||
        isSubtree(root->right,subRoot);;
    }
};