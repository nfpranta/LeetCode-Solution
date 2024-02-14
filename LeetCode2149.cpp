class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> v1, v2;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
                v1.push_back(nums[i]);
            else
                v2.push_back(nums[i]);
        }
        vector<int> ans;
        int ind1 = 0, ind2 = 0;
        while (ind2 < n / 2)
        {
            ans.push_back(v1[ind1]);
            ans.push_back(v2[ind2]);
            ind1++;
            ind2++;
        }
        return ans;
    }
};