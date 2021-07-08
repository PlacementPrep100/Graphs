//Number of Islands 

// Problem link:https://leetcode.com/problems/number-of-islands/

//Approach: It is simple we are simply finding the number of connected componenets by traversing all the adjacents,We can either use BFS or DFS 

class Solution {
public:

    int m,n;
    void DFS(vector<vector<char>>& grid,vector<vector<int>>& visited,int i,int j){
        if( i>=m || i<0 || j>=n || j<0 ||grid[i][j]=='0' ||visited[i][j]==1)
            return;
        visited[i][j]=1;
        DFS(grid,visited,i-1,j);
        DFS(grid,visited,i,j-1);
        DFS(grid,visited,i+1,j);
        DFS(grid,visited,i,j+1);
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
         m = grid.size();
         n = grid[0].size();
        
         vector<vector<int>> visited(m, vector<int> (n, 0));
        
        int no_of_island = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && visited[i][j]==0){
                    DFS(grid,visited,i,j);
                    no_of_island++;
                }
            }
        }
        return no_of_island;
    }
};