class Solution {
public:
    
    void dfs(vector<vector<int>>&grid,int i,int j,int m,int n,vector<vector<int>>&visited,int &currSum){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || visited[i][j]) return;
        visited[i][j] = 1;
        currSum += grid[i][j];
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        for(int dir=0;dir<4;dir++){
            int ni = i + dx[dir];
            int nj = j + dy[dir];
            dfs(grid,ni,nj,m,n,visited,currSum);
        }
    }
    
    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxSum = 0;
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) continue;
                if(visited[i][j]) continue;
                int currSum = 0;
                dfs(grid,i,j,m,n,visited,currSum);
                maxSum = max(maxSum,currSum);
            }
        }
        return maxSum;
    }
};