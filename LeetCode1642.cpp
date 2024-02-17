class Solution
{
    public:
        int furthestBuilding(vector<int> &heights, int bricks, int ladders)
        {
            int n = heights.size();
            int go = 0;
            priority_queue<int> q;
            int diff = 0;
            int i;
            for (i = 1; i < n; i++)
            {
                diff = heights[i] - heights[i - 1];
                if (diff <= 0) continue;
                bricks -= diff;
                q.push(diff);
                if (bricks < 0)
                {
                    bricks += q.top();
                    q.pop();
                    ladders--;
                }
                if (ladders < 0) break;
            }
            return i - 1;
        }
};