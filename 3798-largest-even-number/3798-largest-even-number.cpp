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
        string k="";
        for(int j=0;j<=ans;j++){

            k+=s[j];
        }

        return k;
    }
};