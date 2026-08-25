class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int> m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        
        int temp=k;
        int n=2;

        while(true){

            if(m.find(temp)==m.end()){
                return temp;
            }else{
                temp=n*k;
                n++;
            }
        }

        return -1;
    }
};