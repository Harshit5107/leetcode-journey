class Solution {
public:
    bool isBalanced(string num) {
        
        int odd=0;
        int even=0;

        for(int i=0;i<num.length();i+=2){
            even+=int(num[i]-'0');
        }

        for(int i=1;i<num.length();i+=2){
            odd+=int(num[i]-'0');
        }

        return odd==even;
    }
};