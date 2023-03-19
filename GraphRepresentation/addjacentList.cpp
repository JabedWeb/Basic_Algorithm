#include<bits/stdc++.h>
using namespace std;

vector <int> adj[100];

int main () {
    int vertices, edges;
    cout<<"Enter the number of vertices and edges: ";   
    cin>>vertices>>edges;
    for(int i=0;i<edges;i++){
        int u, v;
        cin>>u>>v;
        // add edge u to v
        // add edge v to u
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=vertices;i++){
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        puts("");
    }
}