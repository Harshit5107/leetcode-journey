class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        
        map<string,int> m1;
        map<string,int> m2;
        

        for(int i=0;i<bannedWords.size();i++){
            m1[bannedWords[i]]++;
        }

        for (int i = 0; i<message.size(); i++)
        {
            m2[message[i]]++;
        }

        int count=0;
        for (auto i : m1)
        {
            if(m2.find(i.first)!=m2.end()){
                count+=m2[i.first];
            }

            if(count>=2){
                return true;
            }
        }
        return false;
        
    }
};