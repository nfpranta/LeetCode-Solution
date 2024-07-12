class Solution
{
    public:
        string reverseVowels(string s)
        {
            vector<int> v;
            int n = s.size();
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'a'
                    or s[i] == 'e'
                    or s[i] == 'o'
                    or s[i] == 'i'
                    or s[i] == 'u'
                    or s[i] == 'A'
                    or s[i] == 'E'
                    or s[i] == 'I'
                    or s[i] == 'O'
                    or s[i] == 'U')
                {
                    v.push_back(i);
                }
            }
            int i = 0, j = v.size() - 1;
            while (i < j)
            {
                swap(s[v[i]], s[v[j]]);
                i++, j--;
            }
            return s;
        }
};
