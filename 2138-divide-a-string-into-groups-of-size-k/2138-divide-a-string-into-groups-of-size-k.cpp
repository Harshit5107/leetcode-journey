class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        vector<string> ans;

        string temp="";
        int count=0;

        for(int i=0;i<s.length();i++){

            count++;
            temp+=s[i];
            if(count==k){
                ans.push_back(temp);
                count=0;
                temp="";
            }

        }

        if(!temp.empty()){

            while(temp.size()!=k){
                temp+=fill;
            }
            ans.push_back(temp);
        }

        

        return ans;
    }
};