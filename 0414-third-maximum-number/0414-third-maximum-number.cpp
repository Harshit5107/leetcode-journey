class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        set<int> n(nums.begin(),nums.end());
        vector<int> vec(n.begin(),n.end());

        if (vec.size()==1)
        {
            return vec[0];
        }else if(vec.size()==2){
            return vec[1];
        }else{
            return vec[vec.size()-3];
        }
        
        
        
        return -1;
    }
};