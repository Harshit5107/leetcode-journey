class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maximum_number=INT_MIN;
        int index;

        if(nums.size()==1 || nums.size()==0) return 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]>maximum_number)
            {
                maximum_number=nums[i];
                index=i;
            }
            
        }
        return index;
    }
};