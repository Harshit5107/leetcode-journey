class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int sum=0;
        int digit=0;

        for(int i=0;i<nums.size();i++){

            sum+=nums[i];

            while(nums[i]>0){
                digit+=nums[i]%10;
                nums[i]/=10;
            }
        }

        return abs(digit-sum);
    }
};