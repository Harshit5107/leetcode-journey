class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,float> m;

        for(int i=0;i<text.length();i++){

            if(text[i]=='b' || text[i]=='a' || text[i]=='l' || text[i]=='o' || text[i]=='n'){

                if(text[i]=='l' || text[i]=='o'){
                    m[text[i]]+=0.5;
                }else{
                    m[text[i]]++;
                }
            }
        }

        int ans=0;

        while(true){

            if(m['b']>=1 && m['a']>=1 && m['l']>=1 && m['o']>=1 && m['n']>=1){
                ans++;
                m['b']--;
                m['a']--;
                m['l']--;
                m['o']--;
                m['n']--;
            }else{
                break;
            }

        
        }

        return ans;
    }
};