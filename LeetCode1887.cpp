class Solution
{
public:
  int reductionOperations(vector<int> &nums)
  {
    int cnt[60000];
    int n = nums.size();
    set<int> s;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      s.insert(nums[i]);
      mn = min(mn, nums[i]);
    }
    sort(nums.begin(), nums.end());
    int ind = 1;
    int ans = 0;
    for (int i = n - 1; i >= 1; i--)
    {
      if (nums[i] != mn)
        ans += s.size() - ind;
      if (nums[i] != nums[i - 1])
      {
        ind++;
      }
      if (nums[i - 1] == mn)
        break;
    }
    return ans;
  }
};