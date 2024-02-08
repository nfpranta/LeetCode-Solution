/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
public:
    Node *dfs(Node *cur, unordered_map<Node *, Node *> &m)
    {
        vector<Node *> neighbor;
        Node *clone = new Node(cur->val);
        m[cur] = clone;
        for (auto it : cur->neighbors)
        {
            if (m.find(it) != m.end())
            {
                neighbor.push_back(m[it]);
            }
            else
            {
                neighbor.push_back(dfs(it, m));
            }
        }
        clone->neighbors = neighbor;
        return clone;
    }
    Node *cloneGraph(Node *node)
    {
        unordered_map<Node *, Node *> m;
        if (node == nullptr)
            return nullptr;
        if (node->neighbors.size() == 0)
        {
            Node *clone = new Node(node->val);
            return clone;
        }
        return dfs(node, m);
    }
};