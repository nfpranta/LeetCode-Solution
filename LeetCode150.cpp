class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        int n = tokens.size();
        for (int i = 0; i < n; i++)
        {
            if (tokens[i].size() > 1 or isdigit(tokens[i][0])) // isdigit works for single/digit only and >1 works for both negative numbers and numbers of multiple digits
            {
                st.push(stoi(tokens[i]));
            }
            else
            {
                int sec = st.top();
                st.pop();
                int fir = st.top();
                st.pop();
                int res;
                if (tokens[i] == "+")
                {
                    res = fir + sec;
                }
                else if (tokens[i] == "-")
                {
                    res = fir - sec;
                }
                else if (tokens[i] == "*")
                {
                    res = fir * sec;
                }
                else
                    res = fir / sec;
                st.push(res);
            }
        }
        return st.top();
    }
};