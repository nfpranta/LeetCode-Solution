class Solution
{
public:
    int canCompleteCircuit(vector<int> &A, vector<int> &B)
    {
        int n = A.size();
        int sum = 0;
        int avail = 0;
        int need = 0;
        int cur = 0;
        int starting = 0;
        for (int i = 0; i < n; i++)
        {
            avail += A[i];
            need += B[i];
            cur += A[i] - B[i];
            if (cur < 0)
            {
                starting = i + 1;
                cur = 0;
            }
        }
        if (need > avail)
            return -1;
        return starting;
    }
};