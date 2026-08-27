class Solution {
public:
    bool isGood(vector<int>& nums) {
        
        int maximum=INT_MIN;

        for(int i=0;i<nums.size();i++){
            maximum=max(maximum,nums[i]);
        }

        int freq[10000]={0};

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        bool ans=false;
        for(int i=1;i<=maximum;i++){
            if(freq[i]==0) return false;
            if(freq[i]>1 && i!=maximum) return false;
            if(freq[maximum]==2) ans=true;
        }

        return ans;
    }

};