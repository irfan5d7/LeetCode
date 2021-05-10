class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<bool> &visited,int node,vector<bool> &stc){
        visited[node] = true;
        stc[node] = true;
        for(int i= 0 ;i<graph[node].size();i++){
            if(!visited[graph[node][i]] && dfs(graph,visited,graph[node][i],stc)) return true;
            else if(stc[graph[node][i]] == true) return true;
        }
        stc[node] = false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>res;
        int v = graph.size();
        vector<bool> visited(v,false);
        vector<bool> stc(v,false);
        for(int i = 0 ;i < v;i++){
            visited[i] = true;
            stc[i] = true;
            if(!dfs(graph,visited,i,stc)) 
                res.push_back(i);
        }
        return res;
    }
};