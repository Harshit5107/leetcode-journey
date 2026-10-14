class Solution {
public:
    int compress(vector<char>& chars) {
        int start=chars[0];
        int fast=1;

        vector<char> temp;

        for(int i=1;i<chars.size();i++){
            if(start!=chars[i]){
                temp.push_back(start);
                if(fast!=1){
                    vector<int> kano;

                    while(fast>0){
                        kano.push_back(fast%10);
                        fast/=10;
                    }

                    for(int i=kano.size()-1;i>=0;i--){
                        temp.push_back(kano[i]+'0');
                    }

                    fast=1;
                    start=chars[i];
                }else{
                    fast=1;
                    start=chars[i];
                }

            }else{
                fast++;
            }
        }


       
                temp.push_back(start);
                if(fast!=1){
                    vector<int> kano;

                    while(fast>0){
                        kano.push_back(fast%10);
                        fast/=10;
                    }

                    for(int i=kano.size()-1;i>=0;i--){
                        temp.push_back(kano[i]+'0');
                    }

        
                }

            


        chars.clear();

        for(int i=0;i<temp.size();i++){
            chars.push_back(temp[i]);
        }

        return temp.size();
    }
};