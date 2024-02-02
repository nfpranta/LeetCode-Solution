class Solution
{
public:
    vector<int> sequentialDigits(int low, int high)
    {
        vector<int> ans;
        for (int i = 1; i <= 9; i++)
        {
            int num = i;
            int nextDigit = i + 1;
            while (num <= high and nextDigit <= 9)
            {
                num *= 10;
                num += nextDigit;
                if (num >= low and num <= high)
                    ans.push_back(num);
                nextDigit++;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};