class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        int n = nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        int sum = 0;
        vector<int> v(mx + 1, 0);
        for (int i = 0; i < n; i++)
        {
            v[nums[i]] += nums[i];
        }
        for (int i = 2; i <= mx; i++)
        {
            v[i] = max(v[i - 1], v[i] + v[i - 2]);
        }
        return v[mx];
    }
};