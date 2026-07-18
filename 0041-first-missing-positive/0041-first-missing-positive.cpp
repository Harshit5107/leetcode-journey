class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        map<int,int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            if(m.find(nums[i])!=m.end()){

                m[nums[i]]++;
            }else{
                m[nums[i]]=1;
            }
        }

        int count=1;


        for (auto i :m)
        {
            if(m.find(count)!=m.end()){
                count++;
            }else{
                
                break;
            }
        }
        

        return count;
        
    }
};