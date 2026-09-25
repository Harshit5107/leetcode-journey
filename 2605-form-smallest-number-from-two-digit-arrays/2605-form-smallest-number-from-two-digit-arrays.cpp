class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int minimum1=INT_MAX;

        unordered_map<int,int> m;
        int common=-1;

        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
            minimum1=min(nums1[i],minimum1);
        }

        int minimum2=INT_MAX;
        for(int i=0;i<nums2.size();i++){
            if(m.find(nums2[i])!=m.end()){
                if(common==-1){
                    common=nums2[i];
                }else{
                    common=min(common,nums2[i]);
                }
            }

            minimum2=min(minimum2,nums2[i]);
        }

        if(common!=-1){
            return common;
        }

        if(minimum1>minimum2){
            return minimum2*10+minimum1;
        }

        return minimum1*10+minimum2;
        
    }
};