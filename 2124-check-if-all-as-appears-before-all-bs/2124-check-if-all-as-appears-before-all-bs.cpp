class Solution {
public:
    bool checkString(string s) {
        int freq[2]={0};

        for(int i=0;i<s.length();i++){
            
            if(s[i]=='a'){
                freq[0]++;
            }else if(s[i]=='b'){
                freq[1]++;
            }

            if(s[i]=='a' && freq[1]>0) return false;
        }

        if(freq[0]==0 && freq[1]>0){
            return true;
        }

        return true;
    }
};