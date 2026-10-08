class Solution {
public:

    void dfs(vector<bool>& visited,int start,vector<vector<int>>& nums){
        visited[start]=true;

        for(int i=0;i<nums.size();i++){
            if(nums[start][i]==1 && !visited[i]){
                dfs(visited,i,nums);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        vector<bool> visited(isConnected.size(),false);

        for(int i=0;i<visited.size();i++){
            if(visited[i]==false){
                ans++;
                dfs(visited,i,isConnected);
            }
        }

        return ans;
    }
};