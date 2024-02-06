class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<vector<int>, vector<string>> temp;
        for (int i = 0; i < strs.size(); i++)
        {
            vector<int> cnt(26, 0);
            for (int j = 0; j < strs[i].size(); j++)
            {
                cnt[strs[i][j] - 'a']++;
            }
            temp[cnt].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for (auto it : temp)
        {
            vector<string> t = it.second;
            ans.push_back(t);
        }
        return ans;
    }
};