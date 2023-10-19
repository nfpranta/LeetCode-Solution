class Solution {
public:
  unordered_map<int,vector<int>>graph;
  vector<int>finish;
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        for(auto u: relations)
        {
            int prev=u[0]-1;
            int next=u[1]-1;
            graph[prev].push_back(next);
        }
        int ans=0;
        finish=vector(n,-1);
        for(int node=0;node<n;node++)
        {
           ans=max(ans,dfs(node,time));
        }
        return ans;
    }
    int dfs(int node,vector<int>&time)
    {
        if(finish[node]!=-1) return finish[node];
        if(graph[node].size()==0) return time[node];
        int ans=0;
        for(auto neighbors:graph[node])
        {
           ans=max(ans,dfs(neighbors,time));
        }
        finish[node]=time[node]+ans;
        return finish[node];
    }
};
