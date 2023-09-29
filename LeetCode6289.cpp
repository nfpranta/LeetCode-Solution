class Solution
{
public:
    int xorBeauty(vector<int> &nums)
    {
        int n = nums.size();
        vector<bitset<32>> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = bitset<32>(nums[i]);
        }
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (v[j][i])
                {
                    cnt++;
                }
            }
            if (cnt % 2 == 1)
            {
                ans ^= (1 << i);
            }
        }
        return ans;
    }
};