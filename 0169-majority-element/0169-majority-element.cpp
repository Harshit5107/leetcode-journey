class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size()/2;
        sort(nums.begin(),nums.end());

        int element=nums[0];
        int count=1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i]!=element)
            {
                element=nums[i];
                count=0;
            }
            if (nums[i]==element)
            {
                count++;
            }

            if(count>n){
                return element;
            }
            
        }
        return nums[0];
    }
};