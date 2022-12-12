#include<bits/stdc++.h>
using namespace std;

bool dfsRec(vector<int> adj[], int s, bool visited[], int parent) {
    visited[s] = true;
    for(int u : adj[s]) {
        if(visited[u] == false) {
            if(dfsRec(adj, u, visited, s) == true) {
                return true;
            }
        }
        else if(u != parent) {
            return false;
        }
    }
    return false;
}

bool dfs(vector<int> adj[], int V) {
    bool visited[V];
    for(int i = 0; i < V; i++) {
        visited[i] = false;
    }
    for(int i = 0; i < V; i++) {
        if(visited[i] == false) {
            if(dfsRec(adj, i, visited, -1)) {
                return true;
            }
        }
    }
    return false;
}

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

int main() {
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);

    showGraph(adj, V);
}