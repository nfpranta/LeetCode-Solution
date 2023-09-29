// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define iter(x) x.begin(), x.end()
#define what_is(x) cout << #x << ": " << x << endl;
#define endl '\n'
#define pii pair<int, int>
#define ff first
#define ss second
#define gap ' '
#define pb push_back
vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid)
{
    int row = grid.size();
    int col = grid[0].size();
    vector<int> r, c;
    for (int i = 0; i < grid.size(); i++)
    {
        int cntrowo = 0;
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 1)
                cntrowo++;
        }
        r.push_back(cntrowo);
    }
    for (int i = 0; i < grid[0].size(); i++)
    {
        int cntrowo = 0;
        for (int j = 0; j < grid.size(); j++)
        {
            if (grid[j][i] == 1)
                cntrowo++;
        }
        c.push_back(cntrowo);
    }
    vector<vector<int>> diff(row, vector<int>(col, 0));
    for (int i = 0; i < row; i++)
    {
        vector<int> v;
        for (int j = 0; j < col; j++)
        {
            int val = r[i] + c[j] - row + r[i] - col + c[j];
            diff[i][j] = val;
        }
        // diff.push_back(v);
    }
    return diff;
}