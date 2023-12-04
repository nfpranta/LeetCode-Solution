class Solution
{
public:
  string largestGoodInteger(string num)
  {
    string ans = "";
    int mx = -1;
    int n = num.size();
    for (int i = 0; i < n - 2; i++)
    {
      if (num[i] == num[i + 1] and num[i] == num[i + 2])
      {
        int val = num[i] - '0';
        if (val > mx and (i == n - 3 or num[i + 3] != num[i]))
        {
          mx = val;
          ans = "";
          ans += num[i];
          ans += num[i];
          ans += num[i];
        }
      }
    }
    return ans;
  }
};