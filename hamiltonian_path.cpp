class Solution
{
    public:
    bool DFS(vector <int> adj[],vector<bool>& visited,int s,int count,int N){
        visited[s] =true;
        count++;
        if(count==N)
           return true;
        for(auto x:adj[s]){
            if(visited[x]==false){
                if(DFS(adj,visited,x,count,N))
                   return true;
            }
        }
        visited[s]=false;
        return false;
    }
    
    bool check(int N,int M,vector<vector<int>> Edges){
        vector <int> adj[N+1];
        for(auto X:Edges){
            int u=X[0],v=X[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector <bool> visited(N+1,false);
        int count=0;
        for(int i=1;i<=N;i++){
            if(visited[i]==false){
                if(DFS(adj,visited,i,count,N))
                   return true;
            }
        }
        return false;
    }
};