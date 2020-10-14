class Solution {
public:
    bool valid(int r,int c,int rn,int cn){
        if(r<0 || r>= rn) return false;
        if(c<0 || c>=cn) return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
         queue<pair<int,int>> que;
        int rn = grid.size(), cn = grid[0].size();
        vector<int> row {0,0,-1,1};
        vector<int> col {1,-1,0,0};
        pair<int,int> node;
        int r,c,fresh = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0; j< grid[i].size();j++){
                if(grid[i][j] == 2){
                    que.push({i,j});
                }
                else if(grid[i][j] ==1) fresh++;
            }
        }
        int time = -1;
        while(!que.empty()){
            int siz = que.size();
            while(siz--){
                node = que.front();
                que.pop();
                for(int i=0;i<4;i++){
                    r = node.first+row[i];
                    c = node.second+col[i];
                    if(valid(r,c,rn,cn)&& grid[r][c] == 1)   {
                        que.push({r,c});
                        grid[r][c] = 2;
                        fresh--;
                     }
                }
            }
            time++;
        }
        if(fresh) return -1;
        if(time ==-1) return 0;
        return time;
    }
};