class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> m;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                m[nums[i]]++;
            }
        }

        unordered_set<int> st;
        for(auto i:m){
            if(i.second==1){
                st.insert(i.first);
            }
        }

        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])!=st.end()){
                return nums[i];
            }
        }
        return -1;
    }
};