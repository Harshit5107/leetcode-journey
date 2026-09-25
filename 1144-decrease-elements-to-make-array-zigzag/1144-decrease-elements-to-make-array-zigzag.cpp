class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        vector<int> temp(nums.begin(),nums.end());
        int even_cost=0;
        if(nums.size()==1) return 0;
        for(int i=0;i<nums.size();i+=2){

            if(i==0 && nums[1]>=nums[0]){
                while(nums[1]>=nums[0]){
                    nums[1]--;
                    even_cost++;
                }
            }else if(i==nums.size()-1 && nums[nums.size()-1]<=nums[nums.size()-2]){
                while(nums[nums.size()-1]<=nums[nums.size()-2]){
                    nums[nums.size()-2]--;
                    even_cost++;
                }
            }else if(i!=0 && i!=nums.size()-1){

                while(nums[i-1]>=nums[i]){
                    nums[i-1]--;
                    even_cost++;
                }

                while(nums[i+1]>=nums[i]){
                    nums[i+1]--;
                    even_cost++;
                }
            }
        }


        int odd_cost=0;

        for(int i=1;i<temp.size();i+=2){

            if(i==temp.size()-1){
                if(temp[temp.size()-2]>=temp[temp.size()-1]){
                    while(temp[temp.size()-2]>=temp[temp.size()-1]){
                        temp[temp.size()-2]--;
                        odd_cost++;
                    }
                }
            }
            else if(i!=temp.size()-1){
                while(temp[i-1]>=temp[i]){
                    temp[i-1]--;
                    odd_cost++;
                }
                while(temp[i+1]>=temp[i]){
                    temp[i+1]--;
                    odd_cost++;
                }
            }
        }


        return min(odd_cost,even_cost);
    }
};