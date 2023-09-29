class DataStream
{
private:
    std::deque<int> stream;
    int value;
    int k;
    map<int, int> s;

public:
    DataStream(int value, int k) : value(value), k(k) {}

    bool consec(int num)
    {
        stream.push_back(num);
        s[num]++;
        if (stream.size() > k)
        {
            int n = stream.front();
            s[n]--;
            if (s[n] == 0)
                s.erase(n);
            stream.pop_front();
        }
        if (stream.size() == k and s.size() == 1 and s[value] > 0)
            return true;
        else
            return false;
        // return stream.size() == k && std::all_of(stream.begin(), stream.end(), [](int x) { return x == value; });
    }
};
