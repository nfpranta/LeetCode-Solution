class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {
        int n = arr.size();
        unordered_map<int, int> m;
        for (auto i : arr)
        {
            m[i]++;
        }

        vector<int> v;
        for (auto it : m)
        {
            v.push_back(it.second);
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= k)
            {
                k -= v[i];
            }
            else
                return v.size() - i;
        }

        return 0; // for[1,2,3] and k=3
    }
};