class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> res;
        int mul = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            res.push_back(mul);
            mul *= nums[i];
        }
        mul = 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            res[i] = res[i] * mul;
            mul *= nums[i];
        }
        return res;
    }
};