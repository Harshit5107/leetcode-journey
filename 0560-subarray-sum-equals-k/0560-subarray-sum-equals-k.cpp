class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    
        int solutio=0;
        int sum=0;
        
        unordered_map<int,int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            sum+=nums[i];
            int prefix=sum-k;
            if(sum==k){
                solutio++;
            }

            if (m.find(prefix)!=m.end())
            {
                solutio+=m[prefix];
            }

                m[sum]++;
            
        }
        

        return solutio;
    }
};