class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int n = nums.size();
        int duplicate = 0;
        int missing = 0;
        int cnt[10005];
        memset(cnt, 0, sizeof cnt);
        for (int i = 0; i < n; i++)
        {
            cnt[nums[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == 2)
            {
                duplicate = i;
            }
            else if (cnt[i] == 0)
            {
                missing = i;
            }
            if (duplicate > 0 and missing > 0)
                break;
        }
        return {duplicate, missing};
    }
};