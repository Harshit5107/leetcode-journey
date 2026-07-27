class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> s(nums.begin(),nums.end());

        int longest=1;
        int num=*s.begin();
        int count=1;

        if (nums.size()==0)
        {
            return 0;
        }
        

        for (auto i:s)
        {
            if (i==(num+1))
            {
                count++;
                num=i;
            }else{
                num=i;
                count=1;
            }

            if (count>longest)
            {
                longest=count;
            }
            
            
        }
        
        return longest;
    }
};