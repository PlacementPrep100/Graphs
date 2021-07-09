// this solution is simply a implemenattion of finding number of connected components in an undirected graph


class Solution {
public:
    int n;
    void DFS(vector<vector<int>>& isConnected,vector <bool>& visited,int s){
          visited[s] = true;
          for(int j=0;j<n;j++){
              if(visited[j]==false && isConnected[s][j])
                  DFS(isConnected,visited,j);
          }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();
        vector <bool> visited(n,false);
        int  count = 0;
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                DFS(isConnected,visited,i);
                count++;
            }
        }
        return count;
    }
};
