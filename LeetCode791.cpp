class Solution
{
public:
    string customSortString(string order, string s)
    {
        unordered_map<char, int> m;
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        for (int i = 0; i < order.size(); i++)
        {
            while (m[order[i]])
            {
                ans += order[i];
                m[order[i]]--;
            }
        }
        for (auto &it : m)
        {
            while (it.second)
            {
                ans += it.first;
                it.second--;
            }
        }
        return ans;
    }
};