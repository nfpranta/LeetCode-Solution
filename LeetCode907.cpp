// https://www.youtube.com/watch?v=BqrO3lMwfRM&t=547s
//[71,55,82,55]
// Here left 55 is thinking right 55 is bigger number and right bigger is interpreting left 55 to be bigger number.
// so both of them ignore the subarrays [71,55,82,55] and [55,82,55] as other 55's built subarray..Each ignoring their role, so the output becomes smaller than expected if we avoid '=' sign from '>='
class Solution
{
public:
  int sumSubarrayMins(vector<int> &arr)
  {
    int n = arr.size();
    vector<int> left(n, -1);
    vector<int> right(n, n);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
      while (!st.empty() and arr[st.top()] > arr[i])
      {
        st.pop();
      }
      if (!st.empty())
      {
        left[i] = st.top();
      }
      st.push(i);
    }
    st = stack<int>();
    for (int i = n - 1; i >= 0; i--)
    {
      while (!st.empty() and arr[st.top()] >= arr[i])
      {
        st.pop();
      }
      if (!st.empty())
      {
        right[i] = st.top();
      }
      st.push(i);
    }
    long long sum = 0;
    int mod = 1e9 + 7;
    for (int i = 0; i < n; i++)
    {
      long long cnt = (i - left[i]) * (right[i] - i);
      long long total = (cnt * arr[i]) % mod;
      sum += total;
      sum %= mod;
    }
    return sum;
  }
};