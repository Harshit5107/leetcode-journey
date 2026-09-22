class Solution {
public:
    string reverseWords(string s) {
        
        string ans="";
        string temp="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '){
                if(temp!=""){
                    reverse(temp.begin(),temp.end());
                    ans+=temp;
                    temp="";
                    ans+=' ';
                }
                
            }else{
                temp+=s[i];
            }
        }

        if(temp!=""){
            reverse(temp.begin(),temp.end());
            ans+=temp;
        }
        
        while(!ans.empty() && ans.back()==' '){
            ans.pop_back();
        }
        return ans;
    }
};