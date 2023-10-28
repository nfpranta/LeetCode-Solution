class Solution
{
public:
    int sumCounts(vector<int> &nums)
    {
        int n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                set<int> s;
                for (int k = i; k <= j; k++)
                {
                    s.insert(nums[k]);
                }
                int sz = s.size();
                cnt += sz * sz;
            }
        }
        return cnt;
    }
};