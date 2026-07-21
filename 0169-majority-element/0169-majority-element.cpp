class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(nums[i])!=m.end())
            {
                m[nums[i]]++;
            }else{
                m[nums[i]]=1;
            }  
        }
        
        int maximum=INT_MIN;
        int ans;
        for(auto i:m){

            if(maximum<i.second){
                ans=i.first;
                maximum=i.second;
            }
        }

        return ans;
    }
};