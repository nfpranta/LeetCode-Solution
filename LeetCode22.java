import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<String> generateParenthesis(int n) {
        List<String>res=new ArrayList<>();
        backtracking(res,n,0,0,"");
        return res;
    }
    private void backtracking(List<String>res,int n, int left, int right, String s)
    {
        if(s.length()==2*n) 
        {
            res.add(s);
            return ;
        }
        else 
        {
            if(left<n)
            {
                backtracking(res,n,left+1,right,s+"(");
            }
            if(left>right)
            {
                backtracking(res,n , left, right+1, s+")");
            }
        }
    }
}