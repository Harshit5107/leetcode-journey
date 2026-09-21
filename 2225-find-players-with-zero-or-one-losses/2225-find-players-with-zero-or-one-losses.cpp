class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> winner;
        map<int,int> looser;

        for(int i=0;i<matches.size();i++){
            if(matches[i][1]){
                looser[matches[i][1]]++;
            }
        }

        for(int i=0;i<matches.size();i++){
            if(looser.find(matches[i][0])==looser.end()){
                winner[matches[i][0]]++;
            }
        }
        vector<int> one;
        vector<vector<int>> final;
        for(auto i:winner){
            one.push_back(i.first);
        }
        final.push_back(one);
        one.clear();
        for(auto i:looser){
            if(i.second==1){
                one.push_back(i.first);
            }
        }

        final.push_back(one);
        return final;
        
    }
};