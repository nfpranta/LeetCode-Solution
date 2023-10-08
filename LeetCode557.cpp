class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string tmp="";
        string fin="";
        for(int i=0;i<n;i++)
        {
           if(s[i]!=' ')
           {
               tmp+=s[i];
           }
           else 
           {
               reverse(tmp.begin(),tmp.end());
               fin+=tmp;
               fin+=" ";
               tmp="";
           }
        }
        if(tmp.size()>0)
        {
            reverse(tmp.begin(),tmp.end());
            fin+=tmp;
        }
        return fin;
    }
};