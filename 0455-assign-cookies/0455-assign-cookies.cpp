class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0;
        int child=0;
        int cookie=0;

        while(cookie<s.size() && child<g.size()){

            if(g[child]<=s[cookie]){
                ans++;
                child++;
                cookie++;
            }else{
                cookie++;
            }
        }

        return ans;
    }
};