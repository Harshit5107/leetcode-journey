class Solution {
public:

//3,2,4
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int start=0;
        vector<int> ans;
        int k=0;
        
        for (int i = 0; i < nums.size()-1; i++)
        {
            int value=target-nums[start];
            for (int j = i+1; j < nums.size(); j++)
            {
                if (value==nums[j])
                {
                    ans.push_back(j);
                    ans.push_back(start);
                    k++;
                }
                
            }
            
            if (k>0)
            {
                break;
            }
            
            start++;
        }
        
        return ans;
    }
};