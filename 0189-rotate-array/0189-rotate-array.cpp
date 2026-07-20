class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k=k%nums.size();
        vector<int> temp1;
        vector<int> temp2;


        for (int i = nums.size()-k; i < nums.size(); i++)
        {
            temp1.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size()-k; i++)
        {
            temp2.push_back(nums[i]);
        }
        
        nums.clear();

        for (int i = 0; i < temp1.size(); i++)
        {
           nums.push_back(temp1[i]);
        }
        
        for (int i = 0; i < temp2.size(); i++)
        {
            nums.push_back(temp2[i]);
        }   
    }
};