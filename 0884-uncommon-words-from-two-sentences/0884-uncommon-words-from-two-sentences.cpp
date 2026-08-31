
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        string s=s1+" "+s2;
        string temp="";
        map<string,int> m;

        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                m[temp]++;
                temp="";
            }else{
                temp+=s[i];
            }
        }

        m[temp]++;

        vector<string> ans;

        for(auto i:m){
            if(i.second==1){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};