class Solution {
public:
    bool dfs(vector<vector<int>>&grid, int r, int c)
    {
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size())
        return true;

        if(grid[r][c] == 1) // If already one then that will by ! becomes true -->
        return false;

        grid[r][c] = 1;

        int left = dfs(grid, r - 1, c);
        int right = dfs(grid, r + 1, c);
        int top = dfs(grid, r, c - 1);
        int bottom = dfs(grid, r, c + 1 );

        return left || top || right || bottom;
    };

    int closedIsland(vector<vector<int>>& grid) {

        int isLands = 0;

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 0)
                {
                    if(!dfs(grid,i,j))
                    isLands++;
                }
            }
        }

        return isLands;
        
    }
};