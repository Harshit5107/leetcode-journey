class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string temp="";

        for(auto i:digits){
            temp+=(i+'0');
        }


        int carry=1;
        vector<int> ans;

        for(int i=temp.length()-1;i>=0;i--){

            int sum=(temp[i]-'0')+carry;

            carry=sum/10;;
            sum%=10;
            

            ans.push_back(sum);
        }

        if(carry!=0){
            ans.push_back(carry);
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};