class Solution
{
public:
    string addBinary(string a, string b)
    {
        int carry = 0;
        string ans = "";
        int n = a.size();
        int m = b.size();
        while (n > 0 and m > 0)
        {
            int sum = ((int)a[n - 1] - '0') + ((int)b[m - 1] - '0') + carry;
            if (sum == 3)
            {
                ans = "1" + ans;
                carry = 1;
            }
            else if (sum == 2)
            {
                ans = "0" + ans;
                carry = 1;
            }
            else if (sum == 1)
            {
                ans = "1" + ans;
                carry = 0;
            }
            else if (sum == 0)
            {
                ans = "0" + ans;
                carry = 0;
            }
            n--;
            m--;
        }
        // cout << carry << endl;
        while (n > 0)
        {
            int sum = ((int)a[n - 1] - '0') + carry;
            // cout<<sum<<endl;
            if (sum == 2)
            {
                ans = "0" + ans;
                carry = 1;
            }
            else if (sum == 1)
            {
                ans = "1" + ans;
                carry = 0;
            }
            else if (sum == 0)
            {
                ans = "0" + ans;
                carry = 0;
            }
            n--;
        }
        while (m > 0)
        {
            int sum = ((int)b[m - 1] - '0') + carry;
            if (sum == 2)
            {
                ans = "0" + ans;
                carry = 1;
            }
            else if (sum == 1)
            {
                ans = "1" + ans;
                carry = 0;
            }
            else if (sum == 0)
            {
                ans = "0" + ans;
                carry = 0;
            }
            m--;
        }
        if (carry == 1)
        {
            ans = "1" + ans;
        }
        return ans;
    }
};