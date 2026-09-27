
class Solution {
public:

    TreeNode* build(vector<int>& nums,int& i,int bound){

        if(i>=nums.size()  || nums[i]>bound ) return NULL;
        TreeNode* node=new TreeNode(nums[i]);
        i++;
        node->left= build(nums,i,node->val);
        node->right= build(nums,i,bound);
       
       return node;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return build(preorder,i,INT_MAX);
    }
};