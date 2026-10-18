class Solution {
public:
    vector<int> dfs(vector<vector<char>>& grid, int r, int c, int pr, int pc) 
    {
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == '#') 
        return {pr, pc};
        
        char ch = grid[r][c];

        grid[r][c] = '#';

        if(ch == 'D')
        return dfs(grid, r+1, c, r, c);

        else if(ch == 'U')
        return dfs(grid, r-1, c, r, c);

        else if(ch == 'L')
        return dfs(grid, r, c-1, r, c);

        else
        return dfs(grid, r, c+1, r, c);
        
    };
    
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        
        return dfs(grid, 0, 0, -1, -1);
    }
};