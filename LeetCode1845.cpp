class SeatManager
{
public:
  int current_seat;
  priority_queue<int, vector<int>, greater<int>> unreserved_seat;
  SeatManager(int n)
  {
    current_seat = 1;
  }

  int reserve()
  {
    if (!unreserved_seat.empty())
    {
      int seatNumber = unreserved_seat.top();
      unreserved_seat.pop();
      return seatNumber;
    }
    int seatNumber = current_seat;
    current_seat++;
    return seatNumber;
  }

  void unreserve(int seatNumber)
  {
    unreserved_seat.push(seatNumber);
  }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */