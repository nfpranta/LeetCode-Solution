class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine)
  {
    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
      char ch = i + 'a';
      if (count(ransomNote.begin(), ransomNote.end(), ch) > count(magazine.begin(), magazine.end(), ch))
      {
        flag = true;
        break;
      }
    }
    return !flag;
  }
};