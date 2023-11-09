class Solution
{
public:
  int countHomogenous(string s)
  {
    int n = s.size();
    int cnt = 0;
    char left = s[0];
    long c = 0;
    int MOD = 1e9 + 7;
    for (int i = 0; i < n; i++)
    {
      if (s[i] != left)
      {
        left = s[i];
        c = 1;
      }
      else
        c++;
      cnt = (cnt + c) % MOD;
    }
    cnt %= MOD;
    return cnt;
  }
};