class Solution
{
public:
    string frequencySort(string s)
    {
        map<char, int> m;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        set<pair<int, char>> cnt;
        for (auto it : m)
        {
            cnt.insert({it.second,
                        it.first});
        }
        string ans = "";
        for (auto it : cnt)
        {
            for (int i = 0; i < it.first; i++)
            {
                ans += it.second;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};