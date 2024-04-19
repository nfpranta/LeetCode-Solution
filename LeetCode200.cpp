class Solution
{
public:
    void dfs(int i, int j, vector<vector<char>> &grid)
    {
        if (i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == '0' or grid[i][j] == '2')
            return;
        grid[i][j] = '2';
        dfs(i + 1, j, grid);
        dfs(i - 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
        return;
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == '1')
                {
                    dfs(i, j, grid);
                    cnt++;
                    cout << cnt << endl;
                }
            }
        }
        return cnt;
    }
};