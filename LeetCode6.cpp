class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1 or numRows>=n) return s;
        int index=0;
        int step=0;
        map<int,vector<char>>m;
        for(int i=0;i<n;i++)
        {
           m[index].push_back(s[i]);
           if(index==0)
           {
               step=1;
           }
           else if(index==numRows-1)
           {
               step=-1;
           }
           index+=step;
        }
        s="";
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<m[i].size();j++)
            {
                s+=m[i][j];
            }
        }
        return s;
    }
};
