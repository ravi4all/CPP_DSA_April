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