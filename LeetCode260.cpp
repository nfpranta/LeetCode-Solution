class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(2, 0);
        int bit = 0;
        for (auto it : nums)
        {
            bit ^= it;
        }
        bit = bit & -(unsigned int)bit;
        for (auto num : nums)
        {
            if ((num & bit) == 0)
            {
                ans[0] ^= num;
            }
            else
                ans[1] ^= num;
        }
        return ans;
    }
};