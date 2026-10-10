class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        vector<int> ans;

        for(int i=0;i<arr1.size();i++){
            m[arr1[i]]++;
        }

        for(int i=0;i<arr2.size();i++){

            if(m.find(arr2[i])!=m.end()){
            while(m[arr2[i]]!=0){
                ans.push_back(arr2[i]);
                m[arr2[i]]--;
            }}
        }

        for(auto i:m){

            if(i.second>0){
                while(m[i.first]!=0){
                    ans.push_back(i.first);
                    m[i.first]--;
                }
            }
        }

        return ans;

    }
};