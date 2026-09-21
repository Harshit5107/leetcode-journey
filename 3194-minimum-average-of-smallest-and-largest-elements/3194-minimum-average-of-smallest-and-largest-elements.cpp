class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double ans=INT_MAX;

        int low=0;
        int high=nums.size()-1;

        while(low<=high){
            double temp=(nums[low]+nums[high])/2.0;
            ans=min(ans,temp);
            low++;
            high--;
        }

        return ans;
    }
};