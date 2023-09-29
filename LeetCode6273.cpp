class Solution
{
public:
    int captureForts(vector<int> &v)
    {
        vector<int> a;
        int n = v.size();
        for (int i = 0; i < n; i++)
        {
            if (v[i] == -1)
            {
                a.push_back(i);
            }
        }
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < a.size(); i++)
        {
            int j;
            for (j = a[i] + 1; j < n; j++)
            {
                if (v[j] == 0)
                    cnt++;
                else
                    break;
            }
            if (j != n and v[j] == 1)
                ans = max(ans, cnt);
            cnt = 0;
            for (j = a[i] - 1; j >= 0; j--)
            {
                if (v[j] == 0)
                    cnt++;
                else
                    break;
            }
            if (j != -1 and v[j] == 1)
                ans = max(ans, cnt);
            cnt = 0;
        }
        return ans;
    }
};