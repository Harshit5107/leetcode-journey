class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        map<int,int> n;

        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){
            n[nums2[i]]++;
        }

        int ans=INT_MAX;
        int count=0;
        for(auto i:m){

            if((n.find(i.first)!=n.end()) && i.first<ans){
                ans=i.first;
                count++;
            }
        }

        if(count==0) return -1;

        return ans;
    }
};