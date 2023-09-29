class Solution
{
public:
    int largestSumAfterKNegations(vector<int>& nums, int k)
    {
        priority_queue<int,vector<int>,greater<int>>q;
        for(auto it:nums)
        {
            q.push(it);
        }
        int i=0;
        while(i<k and !q.empty())
        {
            int top=q.top();
            q.pop();
            top=top*(-1);
            q.push(top);
            i++;
        }
        int sum=0;
        while(!q.empty())
        {
            sum+=q.top();
            q.pop();
        }
        return sum;
    }
};
