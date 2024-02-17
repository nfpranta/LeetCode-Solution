class Solution
{
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>> &stations)
    {
        int curFuel = startFuel;
        int i = 0;
        priority_queue<int> q;
        int cnt = 0;
        while (curFuel < target)
        {
            while (i < stations.size() and curFuel >= stations[i][0])
            {
                q.push(stations[i][1]);
                i++;
            }
            if (q.empty())
                return -1;
            curFuel += q.top();
            q.pop();
            cnt++;
        }
        return cnt;
    }
};