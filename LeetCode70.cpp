class Solution
{
public:
  int climbStairs(int n)
  {
    int fibo[n + 2];
    fibo[1] = 1;
    fibo[2] = 2;
    for (int i = 3; i <= n; i++)
    {
      fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    return fibo[n];
  }
};