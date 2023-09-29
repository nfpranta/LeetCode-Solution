class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            vector<int> tmp;
            while (num)
            {
                tmp.push_back(num % 10);
                num /= 10;
            }
            reverse(tmp.begin(), tmp.end());
            for (int j = 0; j < tmp.size(); j++)
            {
                ans.push_back(tmp[j]);
            }
        }
        return ans;
    }
};