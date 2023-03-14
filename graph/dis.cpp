#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;

int main() {
    int n,m;
    cin >> n>>m;
    vector <int>dist(n+1,INF);
    vector <vector <pair<int,int>>> g(n+1);

    for(int i=0;i<m;i++) {
        int u,v,w;
        cin>> u >> v>> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    //starting
    int s;
    cin>>s;
    dist[s]=0;
    set<pair<int,int>>Sh;
    Sh.insert({0,s});

    while (!Sh.empty()){
        auto x=*(Sh.begin());
        Sh.erase(x);
        for(auto i : g[x.second]){
            if(dist[i.first] >dist[x.second]+i.second){
                Sh.erase({dist[i.first],i.first});
                dist[i.first]=dist[x.second]+i.second;
                Sh.insert({dist[i.first],i.first});
            }
        }

    }
    for(int i=1;i<=n;i++) {
        cout <<dist[i] <<" ";
    }



    return 0;

}
