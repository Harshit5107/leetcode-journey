class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;

        for(int i=0;i<words.size();i++){

            
            if(words[i].size()<pref.length()){
                continue;
            }else{
                bool temp=true;
                string w=words[i];
                for(int j=0;j<pref.length();j++){
                    if(pref[j]!=w[j]){
                        temp=false;
                        break;
                    }
                }

                if(temp) ans++;
            }

            
        }

        return ans;
    }
};