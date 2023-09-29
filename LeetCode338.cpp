class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++)
        {
            int tmp=i;
            int cnt=0;
            while(tmp)
            {
                cnt++;
                tmp&=(tmp-1);
            }
            res.push_back(cnt);
        }
        return res;
    }
};
