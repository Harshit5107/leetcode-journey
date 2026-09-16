class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {

        for(int i=0;i<words.size();i++){
            sort(words[i].begin(),words[i].end());
        }
        
        int count=0;
        map<string,int> m;

        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }

        for(auto i:m){
            if(i.second>=2){
                count+=1;
            }
        }

        return count;
    }
};