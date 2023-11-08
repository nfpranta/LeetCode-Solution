class Solution
{
public:
  bool isReachableAtTime(int sx, int sy, int fx, int fy, int t)
  {
    int width = abs(fx - sx);
    int height = abs(fy - sy);
    if (width == 0 and height == 0 and t == 1)
      return false;
    return t >= max(width, height);
  }
};