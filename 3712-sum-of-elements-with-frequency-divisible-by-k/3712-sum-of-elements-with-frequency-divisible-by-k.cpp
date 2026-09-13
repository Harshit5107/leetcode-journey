class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        int sum=0;
        for(auto i:m){

            if(i.second%k==0){

                sum+=(i.second*i.first);
            }
        }

        return sum;
    }
};