class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m1;
        map<int,int> m2;

        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){
            m2[nums2[i]]++;
        }
        vector<int> ans;
        for(auto i:m2){

            if(m1.find(i.first)!=m1.end()){
                int n=min(i.second,m1[i.first]);
                int t=i.first;
                for(int i=0;i<n;i++){
                    ans.push_back(t);
                }
            }
        }

        return ans;
    }
};