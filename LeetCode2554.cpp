class Solution
{
public:
    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        int cnt = 0;
        set<int> s;
        for (int i = 0; i < banned.size(); i++)
        {
            s.insert(banned[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            if (s.count(i) == 0 and i <= maxSum)
            {
                cnt++;
                maxSum -= i;
            }
        }
        return cnt;
    }
};