class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int start=0;
        int tstart=0;
        bool ans=false;
        while (tstart<=t.length() && start<=s.length())
        {
            if (s[start]==t[tstart])
            {
                ans=true;
                start++;
                tstart++;
            }
            else{
                tstart++;
                ans=false;
            }
            
        }
        return ans;
    }
};