// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
//#define int long long int
#define iter(x) x.begin(), x.end()
#define what_is(x) cout << #x << ": " << x << endl;
#define endl '\n'
#define pii pair<int, int>
#define ff first
#define ss second
#define gap ' '
#define pb push_back
main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        int cnty = 0;
        int cntn = 0;
        int backy = 0;
        int backn = 0;
        int n = s.size();
        int total;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'Y')
                cnty++;
            else
                cntn++;
        }
        total = cnty;
        int tmp = total;
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'Y')
            {
                tmp--;
                if (tmp < total)
                {
                    total = tmp;
                    ans = i;
                }
            }
            else
            {
                tmp++;
            }
        }
        cout << ans << endl;
    }
}
