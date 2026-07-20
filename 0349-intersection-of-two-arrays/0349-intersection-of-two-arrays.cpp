class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> m1;
        map<int,int> m2;

        for (int i = 0; i < nums1.size(); i++)
        {
            if(m1.find(nums1[i])!=m1.end()){
                m1[nums1[i]]++;
            }else{
                m1[nums1[i]]=1;
            }
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            if(m2.find(nums2[i])!=m2.end()){
                m2[nums2[i]]++;
            }else{
                m2[nums2[i]]=1;
            }
        }
        vector<int> ans;
        for (auto i : m1)
        {
            if(m2.find(i.first)!=m2.end()){
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};