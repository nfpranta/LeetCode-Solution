class Solution
{
public:
    int dfs(int i, int j, int r, int c, vector<vector<int>> &grid)
    {
        if (i < 0 or j < 0 or i >= r or j >= c or grid[i][j] == 0)
            return 1;
        if (grid[i][j] == -1)
            return 0;
        grid[i][j] = -1;
        return dfs(i + 1, j, r, c, grid) + dfs(i, j + 1, r, c, grid) + dfs(i - 1, j, r, c, grid) + dfs(i, j - 1, r, c, grid);
    }
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        int perimeter = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 1)
                {
                    perimeter += dfs(i, j, row, col, grid);
                    break;
                }
            }
            if (perimeter > 0)
                break;
        }
        return perimeter;
    }
};