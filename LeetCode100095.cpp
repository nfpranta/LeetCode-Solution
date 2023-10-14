class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        int cnt=0;
        int n=words.size();
        vector<int>v;
        vector<int>ans;
        int back=0;
        for(int i=0;i<n;i++)
        {
            if(words[i]!="prev")
            {
                v.push_back(stoi(words[i]));
                cnt++;
                back=0;
            }
            else
            {
                if(cnt==-1) ans.push_back(-1);
                else
                {
                    back++;
                    if(cnt-back>=0){
                    ans.push_back(v[cnt-back]);
                    }
                    else ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};
