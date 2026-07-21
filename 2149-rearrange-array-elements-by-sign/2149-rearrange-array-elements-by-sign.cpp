class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> positive;
        vector<int> negative;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }

        int move=true;
        int p=0;
        int n=0;
        for (int i = 1; i < nums.size()+1; i++)
        {
            if (move==true)
            {
                ans.push_back(positive[p]);
                p++;
                move=false;
            }else{
                ans.push_back(negative[n]);
                n++;
                move=true;
            }
            
            
        }
        
        return ans;
    }
};