class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int,int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            if(m.find(nums[i])!=m.end()){
                m[nums[i]]++;
            }else{
                m[nums[i]]=1;
            }
        }

        int ans;
        for (auto i : m)
        {
            if(i.second==1){
                ans=i.first;
                break;
            }
        }
        return ans;
        
    }
};
