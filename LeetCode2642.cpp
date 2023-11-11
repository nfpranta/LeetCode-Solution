class Graph
{
public:
  vector<vector<pair<int, int>>> adj;
  Graph(int n, vector<vector<int>> &edges)
  {
    adj.resize(n);
    for (auto e : edges)
    {
      adj[e[0]].push_back({e[1], e[2]});
    }
  }

  void addEdge(vector<int> edge)
  {
    adj[edge[0]].push_back({edge[1], edge[2]});
  }

  int shortestPath(int node1, int node2)
  {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, node1});
    int n = adj.size();
    vector<int> cost(n, INT_MAX);
    while (!pq.empty())
    {
      int current_cost = pq.top().first;
      int current_node = pq.top().second;
      pq.pop();
      if (current_cost > cost[current_node])
        continue; ////this line is necessary to avoid TLE and watch this for details : https://www.youtube.com/watch?v=ditJWdFqoXk
      if (current_node == node2)
        return current_cost; ////if heap gives greater distance than current value we continue like for node 3 if we get dis =7 and we are told to process 10 from a particular to node to node 3 then we ignore that command and continue
      for (auto u : adj[current_node])
      {
        int e = u.first;
        int c = u.second;
        if (cost[e] > c + current_cost)
        {
          cost[e] = c + current_cost;
          pq.push({c + current_cost, e});
        }
      }
    }
    return -1;
  }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */