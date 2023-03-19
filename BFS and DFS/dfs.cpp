#include <bits/stdc++.h>
using namespace std;
vector <int> adj[100];
bool visited[100];

void dfs(int start){
    //int count=0;
    visited[start]=true;
    cout << start << " node  " <<endl;
    for(int i=0; i<adj[start].size(); i++){
        // count++;
        // cout<< " count "<<count<<endl;
        // cout<< " adj"<<adj[start][i]<<endl;
        int next = adj[start][i];
        if(visited[next]==false){
            dfs(next);
        }
    }
}


int main() { 

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
    // adjacent list 
    for (int i=1;i<=vertices;i++) {
        cout << i << "->";
        for (int j=0;j<adj[i].size();j++) {
            cout<<adj[i][j]<<" ";
        }
        puts("");
    }
                               
    dfs (1);
    return 0;
}


/**
 * @brief 
6 5 
1 2
2 3
2 4
4 5
4 6
 */