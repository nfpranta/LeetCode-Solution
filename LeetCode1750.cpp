class Solution
{
public:
    int minimumLength(string s)
    {
        int left = 0;
        int right = s.size() - 1;
        int n = s.size() - 1;
        while (left <= right)
        {
            if (n == 0)
                return 1;
            else if (left == right and s[left - 1] == s[left + 1] and s[left - 1] != s[left])
                return 1;
            else if (left == right and s[left - 1] == s[right + 1] and s[left] == s[left - 1])
                return 0;
            else if (s[left] == s[right])
            {
                left++;
                right--;
            }
            else
            {
                if (left > 0 and s[left] == s[left - 1] and right < n and s[left] == s[right + 1])
                {
                    left++;
                }
                else if (right < n and s[right] == s[right + 1] and left > 0 and s[left - 1] == s[right])
                {
                    right--;
                }
                else
                    break;
            }
        }
        return max(0, right - left + 1);
    }
};