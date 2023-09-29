class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int cnt=0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]!=' ') cnt++;
            else if(s[i]==' ' and cnt==0) continue;
            else if(s[i]==' ' and cnt>0) break;
        }
        return cnt;
    }
};
