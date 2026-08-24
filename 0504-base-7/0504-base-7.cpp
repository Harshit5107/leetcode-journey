class Solution {
public:
    string convertToBase7(int num) {
        
        string ans="";
        if(num==0){
            return "0";
        }
        bool positive=true;

        if(num<0){
            positive=false;
            num*=-1;
        }


        while(num>0){
            int t=num%7;
            num/=7;
            ans+=char('0'+t);
        }

        if(positive==false){
            ans+='-';
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};