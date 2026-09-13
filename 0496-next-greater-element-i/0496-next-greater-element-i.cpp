class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> t;
        for(int i=0;i<nums1.size();i++){

            bool ans=false;
            bool g=false;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans=true;
                    for(int k=j+1;k<nums2.size();k++){
                        if(nums2[k]>nums1[i]){
                            t.push_back(nums2[k]);
                            g=true;
                            break;
                        }
                    }

                    if(ans==true) break;
                }
            }

            if(g==false){
                t.push_back(-1);
            }
        }

        return t;
    }
};