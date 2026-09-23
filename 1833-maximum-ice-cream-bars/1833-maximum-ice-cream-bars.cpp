class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maximum=INT_MIN;

        for(int i=0;i<costs.size();i++){
            maximum=max(maximum,costs[i]);
        }

        maximum+=1;
        vector<int> freq(maximum,0);

        for(int i=0;i<costs.size();i++){
            freq[costs[i]]++;
        }

        int ans=0;

        for(int i=0;i<maximum;i++){

            if(freq[i]>=1 && i<=coins){
                while(freq[i]>0 && i<=coins){
                    ans++;
                    freq[i]--;
                    coins-=i;
                }
            }

            if(coins<i) break;
        }

        return ans;
        
    }
};