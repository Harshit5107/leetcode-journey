class Solution {
public:
    string largestEven(string s) {
        
        int i=s.size()-1;
        int ans;

        while (i>=0)
        {
            if (s[i]%2==0)
            {
                ans=i;
                break;
            }
            i--;
        }
        

        return s.substr(0,ans+1);
    }
};