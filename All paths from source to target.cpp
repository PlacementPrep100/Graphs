//All paths 

//Question link:https://leetcode.com/problems/all-paths-from-source-to-target/

class Solution {
public:
    
    vector<vector<int>> allpath;
    int n;
    
    void printPath(vector<vector<int>>& graph,int s, vector<bool>& visited,vector<int>ans){
        visited[s]=true;
        ans.push_back(s);
        if(s==n-1)
            allpath.push_back(ans);
        for(auto x:graph[s]){
            if(visited[x]==false){
                printPath(graph,x,visited,ans);
            }
        }
        visited[s]=false;//unmarking the vertex so that it may become the part of other vertexes also
    } 
        
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n = graph.size();
        vector <bool> visited(n,false);
        vector <int> ans;
        printPath(graph,0,visited,ans);
        return allpath;
    }
};