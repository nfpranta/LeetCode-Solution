class Solution
{
public:
  int maximumElementAfterDecrementingAndRearranging(vector<int> &arr)
  {
    sort(arr.begin(), arr.end());
    int ans = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
      if (arr[i] > ans)
      {
        ans++;
      }
    }
    return ans;
  }
};