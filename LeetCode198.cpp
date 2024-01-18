class Solution
{
public:
  int rob(vector<int> &nums)
  {
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
      if (i == 1)
        nums[i] = max(nums[i], nums[i - 1]);
      else
        nums[i] = max(nums[i - 1], nums[i - 2] + nums[i]);
    }
    return nums[n - 1];
  }
};