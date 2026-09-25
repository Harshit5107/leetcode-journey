class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<char> st;
        string temp="";

        for(int i=0;i<s.length();i++){
            if(s[i]==')'){

                while(!st.empty() && st.top()!='('){
                    temp+=st.top();
                    st.pop();
                }
                st.pop();
                                
                for(int i=0;i<temp.length();i++){
                    st.push(temp[i]);
                }
                temp="";
                
            }else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};