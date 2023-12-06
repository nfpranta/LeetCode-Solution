class Solution
{
public:
  int totalMoney(int n)
  {
    int weeks = n / 7;
    int amountInFirstWeek = 28;
    int amountInLastWeek = amountInFirstWeek + (weeks - 1) * 7;
    int ans = weeks * (amountInFirstWeek + amountInLastWeek) / 2;
    int finalWeek = 1 + weeks;
    for (int day = 0; day < n % 7; day++)
    {
      ans += finalWeek + day;
    }
    return ans;
  }
};