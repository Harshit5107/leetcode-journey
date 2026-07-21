class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        int ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(nums[i])!=m.end())
            {
                return nums[i];
            }else{
                m[nums[i]]=1;
            }
            
        }
        return -1;
    }
};