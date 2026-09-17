class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maximum=INT_MIN;
        int minimum=INT_MAX;

        for(int i=0;i<nums.size();i++){
            maximum=max(nums[i],maximum);
            minimum=min(nums[i],minimum);
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=maximum && nums[i]!=minimum) return nums[i];
        }

        return -1;
    }
};