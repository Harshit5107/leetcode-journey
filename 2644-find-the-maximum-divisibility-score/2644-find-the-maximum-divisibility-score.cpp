class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        
        int score=INT_MIN;
        int number=INT_MAX;

        for(int i=0;i<divisors.size();i++){

            int sum=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%divisors[i]==0) sum++;
            }

            if(score<sum){
                score=sum;
                number=divisors[i];
            }else if(score==sum){
                number=min(number,divisors[i]);
            }
        }

        return number;
    }
};