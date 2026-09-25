class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";

        for(int i=0;i<s.length();i++){
            if((s[i]>=97 && s[i]<=122)){
                temp+=s[i];
            }else if((s[i]>=65 && s[i]<=90)){
                temp+=(s[i]+32);
            }else if(s[i]>=48 && s[i]<=57){
                temp+=s[i];
            }
        }

        int right=0;
        int left=temp.length()-1;

        while(right<=left){
            if(temp[right]!=temp[left]){
                return false;
            }else{
                right++;
                left--;
            }
        }

        return true;
    }
};