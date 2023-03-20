#include <bits/stdc++.h>
using namespace std;
vector <int> adj[100];
bool visited[100];

void dfs(int start){
    //int count=0;
    visited[start]=true;
    cout << start << " node  " <<endl;
    for(int i=0; i<adj[start].size(); i++){
        int next = adj[start][i];
        if(visited[next]==false){
            dfs(next);
        }
    }
}


int main() { 

    int vertices=6, edges=5;
    cout<<"Enter the number of vertices and edges: "<<endl;
    //cin>>vertices>>edges;
    // for(int i=0;i<edges;i++){
    //     int u, v;
    //     cin>>u>>v;
    //     // add edge u to v
    //     // add edge v to u
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(2);
    adj[4].push_back(2);
    adj[4].push_back(5);
    adj[4].push_back(6);
    adj[5].push_back(4);
    adj[6].push_back(4);

    // adjacent list 
    for (int i=1;i<=6;i++) {
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