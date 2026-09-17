
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        vector<int> nums;
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            int sum=0;

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left){
                    q.push(node->left);
                }

                if(node->right){
                    q.push(node->right);
                }
            }

            nums.push_back(sum);
        }

        int i=0;

        for(int j=1;j<nums.size();j++){
            if(nums[i]<nums[j]){
                i=j;
            }
        }

        return i+1;
    }
};