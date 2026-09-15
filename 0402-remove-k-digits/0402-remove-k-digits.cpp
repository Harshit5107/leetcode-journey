class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if(num.size()==k) return "0";
        stack<char> st;
        
        for(int i=0;i<num.length();i++){

            while(!st.empty() && st.top()>num[i] && k>0){
                st.pop();
                k--;
            }
            
            
            st.push(num[i]);
        }

        while(k>0){
            st.pop();
            k--;
        }

        string s(st.size(),'a');

        for(int i=st.size()-1;i>=0;i--){
            s[i]=st.top();
            st.pop();
        }

        int i=0;
        while(i<s.size() && s[i]=='0'){
            i++;
        }
           
        if(i==s.size()) return "0";

        return s.substr(i);
    }
};