
//find negative cycle
// find the single source shortest path
#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> dist(n + 1, INF);
    vector<vector<pair<int,int>>> g(n + 1);

    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }

    //starting vertex
    int s;
    cin >> s;
    dist[s] = 0;

    // Bellman-Ford Algorithm
        for(int k = 1; k <= n - 1; k++) {
            for(int u = 1; u <= n; u++) {
                for(int i = 0; i < g[u].size(); i++) {
                    int v = g[u][i].first;
                    int w = g[u][i].second;
                    if(dist[u] != INF && dist[v] > dist[u] + w) {
                        dist[v] = dist[u] + w;
                    }
                }
            }
        }


    // check for negative cycles
        bool hasNegativeCycle = false;
        for(int u = 1; u <= n; u++) {
            for(int i = 0; i < g[u].size(); i++) {
                int v = g[u][i].first;
                int w = g[u][i].second;
                if(dist[u] != INF && dist[v] > dist[u] + w) {
                    hasNegativeCycle = true;
                }
            }
        }


    if(hasNegativeCycle) {
        cout << "The graph contains negative cycles" << endl;
    }
    else {
        // print shortest distances
        for(int i = 1; i <= n; i++) {
            if(dist[i] == INF) {
                cout << "INF ";
            }
            else {
                cout << dist[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
