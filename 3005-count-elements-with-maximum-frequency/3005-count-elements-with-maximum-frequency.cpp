class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        int maximum=INT_MIN;

        for(auto i:m){
            maximum=max(i.second,maximum);
        }

        int ans=0;

        for(auto i:m){
            if(maximum==i.second){
                ans+=i.second;
            }
        }

        return ans;
    }
};