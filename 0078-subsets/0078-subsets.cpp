class Solution {
public:

    void print(int idx,vector<int>& nums,int end,vector<vector<int>>& ans,vector<int>& temp){

        if(idx>=end){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[idx]);
        print(idx+1,nums,end,ans,temp);
        temp.pop_back();
        print(idx+1,nums,end,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        int start=0;
        int end=nums.size();
        print(start,nums,end,ans,temp);

        return ans;
    }
};