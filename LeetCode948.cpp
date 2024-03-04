class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        sort(tokens.begin(), tokens.end());
        int left = 0;
        int right = tokens.size() - 1;
        int score = 0;
        int mxscore = 0;
        while (left <= right)
        {
            if (power >= tokens[left])
            {
                power -= tokens[left++];
                score++;
                mxscore = max(mxscore, score);
            }
            else if (score >= 1)
            {
                power += tokens[right--];
                score--;
            }
            else
                break;
        }
        return mxscore;
    }
};