class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        
        for(int i=0;i<s.length()-1;i++){

            int n=int(s[i]-'0');
            int m=int(s[i+1]-'0');
        
            if(abs(n-m)>2){
                return false;
            }
        }

        return true;
    }
};