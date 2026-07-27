class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if (nums.size()==0)
        {
            return 0;
        }
        
        unordered_set<int> s(nums.begin(),nums.end());
        int longest=1;
        for (auto i : s)
        {
            int curr=i;
            int count=1;
            if (s.find(i-1)!=s.end())
            {
                continue;
            }else{
                while (s.find(curr+1)!=s.end())
                {
                    curr++;
                    count++;
                }
                
            }

            longest=max(longest,count);
            
        }
        return longest;
    }
};