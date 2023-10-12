class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>s,e;
        for(auto it: flowers)
        {
            s.push_back(it[0]);
            e.push_back(it[1]);
        }
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        vector<int>ans;
        for(int i=0;i<people.size();i++)
        {
            int p=people[i];
            auto si=upper_bound(s.begin(),s.end(),p)-s.begin();//started blooming before p or at time p
            auto ei=lower_bound(e.begin(),e.end(),p)-e.begin(); //finished blooming before time p
            ans.push_back(si-ei);
        }
        return ans;
    }
};
