class Solution {
public:
    int d;
    vector<vector<int>> paths;
    void dfs(vector<vector<int>>& graph,int v,vector<int> trail){
        trail.push_back(v);
        if(v==d){
            paths.push_back(trail);
            return;
        }
        for(int i:graph[v]){
            dfs(graph,i,trail);
        }
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>trail;
        d = graph.size()-1;
        dfs(graph,0,trail);
        return paths;
    }
};