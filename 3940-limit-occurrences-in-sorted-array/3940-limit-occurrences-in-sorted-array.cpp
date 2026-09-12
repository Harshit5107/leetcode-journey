class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {

        vector<int> ans;
        int n=nums[0];
        int count=1;
        ans.push_back(n);

        for(int i=1;i<nums.size();i++){

            if(nums[i]!=n){
                n=nums[i];
                count=0;
                
            }
            if(count<k){
                ans.push_back(nums[i]);
                count++;
            }
        }
        
        return ans;
    }
};