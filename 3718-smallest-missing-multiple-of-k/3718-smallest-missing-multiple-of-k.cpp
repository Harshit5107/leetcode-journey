class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        set<int> s(nums.begin(),nums.end());

        int i=k;
        int t=1;

        while(true){

            if(s.count(i*t)==0) return i*t;
            else{
                t++;
            }
        }

        return -1;
    }
};