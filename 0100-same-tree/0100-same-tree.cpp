bool pre(TreeNode* p,TreeNode* q){
    if(p==NULL && q==NULL){
        return true;
    }

    if(p==NULL|| q==NULL){
        return false;
    }

    if(p->val!=q->val) return false;
    

    return pre(p->left,q->left)&&
    pre(p->right,q->right);;
}
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans=pre(p,q);
        return ans;
    }
};