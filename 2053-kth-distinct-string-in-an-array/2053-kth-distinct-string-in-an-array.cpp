class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        unordered_map<string,int> m;
        vector<string> ans;

        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }

        for(int i=0;i<arr.size();i++){
            if(m[arr[i]]==1){
                ans.push_back(arr[i]);
            }
        }

        if(k>ans.size()){
            return "";
        }

        return ans[k-1];
    }
};