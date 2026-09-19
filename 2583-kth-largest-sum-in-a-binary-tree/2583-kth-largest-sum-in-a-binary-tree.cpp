
class Solution {
public:

    void level(TreeNode* root,vector<long long>& nums){
        if(root==NULL) return;
        queue<TreeNode*> q;
        q.push(root);


        while(!q.empty()){
           
            int size=q.size();
            long long sum=0;

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
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> nums;
        level(root,nums);
        if(k>nums.size()) return -1;
        sort(nums.begin(),nums.end());

        return nums[nums.size()-k];
    }
};