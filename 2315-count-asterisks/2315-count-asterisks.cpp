class Solution {
public:
    int countAsterisks(string s) {
        bool m=false;
        int count=0;

        for(int i=0;i<s.length();i++){

            if(s[i]=='|' && m==false){
                m=true;
            }else if(s[i]=='|' && m==true){
                m=false;
            }

            if(s[i]=='*' && m==false){
                count++;
            }
        }

        return count;
    }
};