class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
       vector<string> ans(score.size());
       int count=0;

       for(int i=0;i<score.size();i++){

            int m=score[i];
            int maximum=i;
            for(int j=0;j<score.size();j++){
                if(m<score[j]){
                    maximum=j;
                    m=score[j];
                }
            }

            count++;

            if(count==1){
                ans[maximum]="Gold Medal";
            }else if(count==2){
                ans[maximum]="Silver Medal";
            }else if(count==3){
                ans[maximum]="Bronze Medal";
            }else{
                ans[maximum]=to_string(count);
            }

            score[maximum]=-1;
       }

       return ans;
    }
};