class Solution {
public:
    
    bool check(vector<vector<int>>& graph,int s,vector <int>& color ){
       queue <int> q;
       q.push(s);
       color[s]=1;
       while(!q.empty()){
                int temp=q.front();
                q.pop();
                for(auto neighbour:graph[temp]){
                    if(color[neighbour]==0){
                        color[neighbour]=-color[temp];
                        q.push(neighbour);
                    }
                    else if(color[neighbour]==color[temp])
                         return false;
                }
            }
       return true;   
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector <int> color(n,0);
        
        for(int i=0;i<n;i++){
            if(color[i]==0){
                if(check(graph,i,color)==false)
                   return false;
            }
        }
        return true;
    }
};