class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string st="";
        int count=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
                st+=s[i];
            }else if(s[i]==')' && count>0){
                st+=s[i];
                count--;
            }else if(s[i]!=')'){
                st+=s[i];
            }
        }
        string ans="";
        for(int i=st.length()-1;i>=0;i--){
            if(st[i]=='(' && count>0){
                count--;
            }else{
                ans+=st[i];
            }
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};