class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        if (n == 2)
            return min(cost[0], cost[1]);
        for (int i = n - 3; i >= 0; i--)
        {
            if (i == 0)
                cost[i] = min(cost[i] + cost[i + 2], cost[i + 1]);
            else
                cost[i] = min(cost[i] + cost[i + 2], cost[i + 1] + cost[i]);
        }
        return cost[0];
    }
};