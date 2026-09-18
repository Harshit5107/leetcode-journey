class Solution {
public:
    int maxDepth(string s) {
        
        stack<char> st;
        int maximum=-1;

        for(int i=0;i<s.length();i++){

            if(s[i]=='('){
                st.push('(');
            }

            else if(s[i]==')'){
                maximum=max((int)st.size(),maximum);
                st.pop();
            }
        }

        if(maximum==-1) return 0;
        return maximum;


    }
};