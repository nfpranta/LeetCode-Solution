class Solution
{
public:
    int findKOr(vector<int> &nums, int k)
    {
        int res = 0;
        for (int i = 0; i < 32; i++)
        {
            int cnt = 0;
            for (int num : nums)
            {
                if ((num & (1 << i)) != 0)
                {
                    cnt++;
                }
            }
            if (cnt >= k)
            {
                res |= (1 << i);
            }
        }
        return res;
    }
};