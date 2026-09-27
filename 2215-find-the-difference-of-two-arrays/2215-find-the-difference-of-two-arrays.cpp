class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int,int> temp2;
        unordered_map<int,int> temp1;

        for(int i=0;i<nums1.size();i++){
            temp1[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){
            temp2[nums2[i]]++;
        }
        set<int> kano;

        for(int i=0;i<nums1.size();i++){

            if(temp2.find(nums1[i])==temp2.end()){
                kano.insert(nums1[i]);
            }
        }
        vector<int> k(kano.begin(),kano.end());

        ans.push_back(k);
        k.clear();
        kano.clear();

        for(int i=0;i<nums2.size();i++){
            if(temp1.find(nums2[i])==temp1.end()){
                kano.insert(nums2[i]);
            }
        }
        vector<int> k2(kano.begin(),kano.end());
        ans.push_back(k2);
        kano.clear();

        return ans;
        
    }
};