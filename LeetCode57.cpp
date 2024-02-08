class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        int row = intervals.size();
        vector<vector<int>> ans;
        int s = newInterval[0];
        int e = newInterval[1];
        int i = 0;
        while (i < row and intervals[i][1] < s)
        {
            ans.push_back(intervals[i]);
            i++;
        }
        while (i < row and e >= intervals[i][0])
        {
            s = min(s, intervals[i][0]);
            e = max(e, intervals[i][1]);
            i++;
        }
        ans.push_back({s, e});
        while (i < row)
        {
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};