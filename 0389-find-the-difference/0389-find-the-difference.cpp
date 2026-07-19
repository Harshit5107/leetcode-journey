class Solution {
public:
    char findTheDifference(string s, string t) {
        
        map<char,int> s1;
        map<char,int> s2;
        
        for (int i = 0; i < s.length(); i++)
        {
             if(s1.find(s[i])!=s1.end()){
                s1[s[i]]++;
             }else{
                s1[s[i]]=1;
             }
        }

        for (int i = 0; i < t.length(); i++)
        {
             if(s2.find(t[i])!=s2.end()){
                s2[t[i]]++;
             }else{
                s2[t[i]]=1;
             }
        }

        char ans;
        for (auto i : s2)
        {
            if(s1[i.first]!=i.second){
                ans=i.first;
                break;
            }
        }
        
        
        
        return ans;
        
    }
};