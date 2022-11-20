#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void showGraph(vector<int> adj[], int V) {
    for(int v = 0; v < V; v++) {
        cout << v << " -> ";
        for(auto x : adj[v]) {
            cout << x << ",";
        }
        cout << "\n";
    }
}

void bfs(vector<int> adj[], int v) {
    bool visited[v+1];
    for(int i = 1; i <= v; i++) {
        visited[i] = false;
    }
    int source = 1;
    visited[source] = true;
    
    queue<int> q;
    q.push(source);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";
        for(int i = 0; i < adj[node].size(); i++) {
            if(visited[adj[node][i]] == false) {
                visited[adj[node][i]] = true;
                q.push(adj[node][i]);
            }
        }
    }
    
}

int main() {
    int V = 6;
    vector<int> adj[V+1];
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);

    // showGraph(adj, V);
    bfs(adj, V);
}