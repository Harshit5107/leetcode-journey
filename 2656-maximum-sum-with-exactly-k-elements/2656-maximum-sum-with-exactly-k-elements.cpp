class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maximum=INT_MIN;
        int count=0;
        int ans=0;

        for(int i=0;i<nums.size();i++){
            maximum=max(maximum,nums[i]);
        }

        while(count!=k){
            ans+=maximum;
            count++;
            maximum++;
        }

        return ans;
    }

};