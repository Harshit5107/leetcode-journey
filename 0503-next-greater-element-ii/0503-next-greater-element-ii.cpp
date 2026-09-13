class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        

        vector<int> ans;

        for(int i=0;i<nums.size();i++){

            bool f=false;
            int count=0;
            int j=(i+1)%nums.size();

            while(count<nums.size()-1){

                if(nums[i]<nums[j]){
                    ans.push_back(nums[j]);
                    f=true;
                    break;
                }
                j=(j+1)%nums.size();
                
                count++;     
            }

            if(f==false){
                ans.push_back(-1);
            }
        }
        return ans;

    }
};