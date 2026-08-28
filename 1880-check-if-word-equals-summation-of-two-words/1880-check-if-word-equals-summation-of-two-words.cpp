class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        int m1=0;
        int m2=0;
        int m3=0;
        
        for(int i=0;i<firstWord.length();i++){
            int n=int((firstWord[i]-'a'));
            m1=m1*10+n;
        }

        for(int i=0;i<secondWord.length();i++){
            int n=int((secondWord[i]-'a'));
            m2=m2*10+n;
        }

        for(int i=0;i<targetWord.length();i++){
            int n=int((targetWord[i]-'a'));
            m3=m3*10+n;
        }

        return (m1+m2)==m3;

        
    }
};