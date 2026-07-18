class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        

        vector<int> ans;
        int start=-1,end=-1;

        for (int i = 0; i < nums.size(); i++)
        {
            if(target==nums[i]){
                end=i;
                if(start==-1){
                    start=i;
                }
            }
        }
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};