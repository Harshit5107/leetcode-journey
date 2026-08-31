class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;

        unordered_map<char,int> m;

        for(int i=0;i<word.length();i++){
            m[word[i]]++;
        }

        for(auto i:m){

            if(i.first>=65 && i.first<=90){
                if(m.find(i.first + 32)!=m.end()){
                    count++;
                }
            }

            if(i.first>=97 && i.first<=122){
                if(m.find(i.first - 32)!=m.end()){
                    count++;
                }
            }
        }

        return count/2;
    }
};