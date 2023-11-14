class Solution
{
public:
  int countPalindromicSubsequence(string s)
  {
    unordered_map<int, vector<int>> m;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
      m[s[i] - 'a'].push_back(i);
    }
    int ans = 0;
    for (auto it : m)
    {
      int mn = it.second[0];
      int mx = it.second[it.second.size() - 1];
      unordered_set<char> st;
      for (int i = mn + 1; i < mx; i++)
      {
        st.insert(s[i]);
      }
      ans += st.size();
    }
    return ans;
  }
};