class Solution
{
public:
    int numSquares(int n)
    {
        /*int dp[n+1];
          dp[0]=0;
          for(int i=1;i<=n;i++)
          {
              dp[i]=i;
              for(int j=1;j * j<=i;j++)
              {
                  dp[i]=min(dp[i],dp[i-j*j]+1);//1 is for the squared value;for 6 6-4=2 which is of 2 perfect square consist of 1 which makes 2 1's+1 4's=3;
              }
          }
            return dp[n]; */
        if (sqrt(n) == sqrtl(n))
            return 1;
        else
        {
            queue<int> q;
            int cnt = 0;
            q.push(n);
            while (!q.empty())
            {
                int sz = q.size(); // since we will be pushing elements into the queue but we do not wish to consider these elements in first iteration
                for (int j = 0; j < sz; j++)
                {
                    int num = q.front();
                    q.pop();
                    for (int i = 1; i * i <= num; i++) // if it is not returned in first iteration then there is a chance that a particular squared number is present more than once
                    {
                        int potsquare = num - (i * i);
                        // cout<<potsquare<<endl;
                        if (floor(sqrtl(potsquare)) == sqrt(potsquare))
                            return cnt + 2;
                        else
                            q.push(potsquare); // these are actual squares not potsquare
                    }
                }
                // cout<<endl;
                cnt++; // one actual square is taken
            }
        }
        return -1;
    }
};