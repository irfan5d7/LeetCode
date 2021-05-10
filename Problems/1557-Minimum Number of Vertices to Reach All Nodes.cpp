class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n,true);
        for(auto i : edges){
            vis[i[1]] = false;
        }
        vector<int> res;
        for(int i= 0;i<n;i++){
            if(vis[i]) res.push_back(i);
        }
        return res;
    }
};