class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        
        // Directions: up, down, left, right
        vector<vector<int>> dirs = {{-1,0},{1,0},{0,-1},{0,1}};
        
        // Mapping: which directions each type allows
        unordered_map<int, vector<int>> mp = {
            {1, {2, 3}}, // left, right
            {2, {0, 1}}, // up, down
            {3, {2, 1}}, // left, down
            {4, {3, 1}}, // right, down
            {5, {2, 0}}, // left, up
            {6, {3, 0}}  // right, up
        };
        
        // Opposite directions
        vector<int> opposite = {1, 0, 3, 2};
        
        queue<pair<int,int>> q;
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        
        q.push({0,0});
        vis[0][0] = true;
        
        while(!q.empty()) {
            auto [x,y] = q.front(); q.pop();
            
            if(x == m-1 && y == n-1) return true;
            
            int type = grid[x][y];
            
            for(int d : mp[type]) {
                int nx = x + dirs[d][0];
                int ny = y + dirs[d][1];
                
                if(nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
                if(vis[nx][ny]) continue;
                
                int nextType = grid[nx][ny];
                
                // Check if next cell connects back
                for(int backDir : mp[nextType]) {
                    if(backDir == opposite[d]) {
                        vis[nx][ny] = true;
                        q.push({nx, ny});
                        break;
                    }
                }
            }
        }
        
        return false;
    }
};