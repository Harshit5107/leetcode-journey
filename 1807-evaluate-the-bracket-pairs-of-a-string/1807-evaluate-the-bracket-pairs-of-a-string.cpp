class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        unordered_map<string,string> m;

        for(int i=0;i<knowledge.size();i++){
            m[knowledge[i][0]]=knowledge[i][1];
        }

        string ans="";
        bool b=false;
        string temp="";

        for(int i=0;i<s.length();i++){

            if(s[i]=='('){
                b=true;
            }

            else if(s[i]==')'){
                b=false;

                if(m.find(temp)==m.end()){
                    ans+="?";
                    temp="";
                }else{
                    ans+=m[temp];
                    temp="";
                }
            }else if(b==true){
                temp+=s[i];
            }else{
                ans+=s[i];
            }
        }

        return ans;
    }
};