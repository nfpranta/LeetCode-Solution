class Solution
{
public:
    static bool cmp(pair<int, int> a, pair<int, int> b)
    {
        if (a.first == b.first)
        {
            return a.second <= b.second;
        }
        return a.first >= b.first;
    }
    vector<int> topStudents(vector<string> &positive_feedback, vector<string> &negative_feedback, vector<string> &report, vector<int> &student_id, int k)
    {
        pair<int, int> a[report.size() + 3];
        map<string, int> m;
        for (auto it : positive_feedback)
        {
            m[it] += 3;
        }
        for (auto it : negative_feedback)
        {
            m[it]--;
        }
        for (int i = 0; i < report.size(); i++)
        {
            int cnt = 0;
            string s;
            for (auto it : report[i])
            {
                if (it == ' ')
                {
                    cnt += m[s];
                    s = "";
                }
                else
                {
                    s += it;
                }
            }
            cnt += m[s];
            a[i] = {cnt, student_id[i]};
        }
        sort(a, a + report.size(), cmp);
        vector<int> v;
        for (int i = 0; i < k; i++)
            v.push_back(a[i].second);
        return v;
    }
};