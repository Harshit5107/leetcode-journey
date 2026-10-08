class Solution {
public:


    void bfs(int row,int col,vector<vector<bool>>& visited,vector<vector<char>>& grid){
        visited[row][col]=true;
        queue<pair<int,int>> q;
        q.push({row,col});

        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();

            int dr[]={-1,0,1,0};
            int dc[]={0,-1,0,1};
            for(int i=0;i<4;i++){
                    int deltarow=dr[i]+row;
                    int deltacol=dc[i]+col;

                    if(deltarow>=0 && deltarow<grid.size() && deltacol>=0 && deltacol<grid[0].size()&& grid[deltarow][deltacol]=='1' && !visited[deltarow][deltacol]){
                        visited[deltarow][deltacol]=true;
                        q.push({deltarow,deltacol});
                    }
                }
            }
        }
        
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int count=0;

        for(int i=0;i<grid.size();i++){

            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    count++;
                    bfs(i,j,visited,grid);
                }
            }
        }

        return count;
    }
};