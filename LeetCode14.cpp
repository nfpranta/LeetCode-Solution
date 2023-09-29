class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        int i;
        for( i=0; i<strs[0].size(); i++)
        {
            char ch=strs[0][i];
            int j;
            for(j=1; j<strs.size(); j++)
            {
                if(strs[j][i]!=ch) break;
            }
            if(j!=strs.size()) break;
        }
        return strs[0].substr(0,i);
    }
};
