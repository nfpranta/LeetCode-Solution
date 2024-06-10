class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<char> sorted(heights.begin(), heights.end());
        int n = heights.size();
        sort(sorted.begin(), sorted.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (sorted[i] != heights[i]);
        }
        return cnt;
    }
};