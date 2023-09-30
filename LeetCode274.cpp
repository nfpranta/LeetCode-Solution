class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        if(n==1)
        {
            if(citations[0]>=1) return 1;
            return 0;
        }
        sort(citations.begin(),citations.end());
        int mx=0;
        for(int i=0;i<n;i++)
        {
           if(citations[i]>=n-i) mx=max(mx,n-i);
        }
        return mx;
    }
};