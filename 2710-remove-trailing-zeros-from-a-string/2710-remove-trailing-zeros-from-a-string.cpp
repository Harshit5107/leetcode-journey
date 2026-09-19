class Solution {
public:
    string removeTrailingZeros(string num) {
        
        int count=num.size();
        bool found=false;
        for(int i=num.size()-1;i>=0;i--){

            if(num[i]!='0'){
                found=true;
                break;
            }
            if(num[i]=='0' && found==false){
                count--;
            }
        }

        return num.substr(0,count);
    }
};