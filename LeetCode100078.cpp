class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        int cnt=0;
        set<int>s;
        int c=0;
        vector<string>ans;
        s.insert(0);
        if(n==1)
        {
          return words;
        }
        for(int i=0;i<n-1;i++)
        {
            if(groups[c]!=groups[i+1])
            {
                s.insert(i+1);
                c=i+1;
            }
        }
        for(auto it:s)
        {
            ans.push_back(words[it]);
        }
        return ans;
    }
};
