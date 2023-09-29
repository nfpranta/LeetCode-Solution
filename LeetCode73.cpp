class Solution
{
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int numrows=matrix.size();
        int numcols=matrix.front().size();
        vector<bool>checkrows(numrows,false);
        vector<bool>checkcols(numcols,false);
        for(int i=0; i<numrows; i++)
        {
            for(int j=0; j<numcols; j++)
            {
                if(matrix[i][j]==0)
                {
                    checkrows[i]=true;
                    checkcols[j]=true;
                }
            }
        }
        for(int i=0; i<numrows; i++) //setting with respect to rows
        {
            if(checkrows[i])
                for(int j=0; j<numcols; j++)
                    matrix[i][j]=0;
        }
        for(int i=0; i<numcols; i++) //setting with respect to cols
        {
            if(checkcols[i])
                for(int j=0; j<numrows; j++)
                    matrix[j][i]=0;
        }
    }
};
