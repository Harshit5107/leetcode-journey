class Solution {
public:
    int reverseDegree(string s) {
        map<char,int> m;
        char c='a';
        

        for (int i = 26; i > 0; i--)
        {
            m[c]=i;
            c+=1;
        }

        
        int ans=0;
        
        for (int i = 0; i < s.length(); i++)
        {
            if (m.find(s[i])!=m.end())
            {
                ans+=(m[s[i]]*(i+1));
            }
            
        }
        
        
        return ans;
    }
};