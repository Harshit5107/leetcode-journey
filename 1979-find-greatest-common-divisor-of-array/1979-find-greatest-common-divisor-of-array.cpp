class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int minimum=INT_MAX;
        int maximum=INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            if (minimum>nums[i])
            {
                minimum=nums[i];
            }
            if (maximum<nums[i])
            {
                maximum=nums[i];
            }    
        }


        int divison=1;
        for (int i = 1; i <= minimum; i++)
        {
            if (minimum%i==0 && maximum%i==0)
            {
                divison=i;
                cout<<divison;
            }
            
        }
        
        return divison;
    }
};