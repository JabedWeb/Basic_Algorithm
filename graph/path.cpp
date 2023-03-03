

#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
vector<int> adj[MAX];
bool visited[MAX];
int add_matrix[MAX][MAX];



void edge(int x, int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}



//dfs
/*
input
4 4
1 2
1 3
2 4
3 4
        1   
      /  \
      2  3
      \  /
        4

//destination  1 is 4
output
1 2 4       

*/
void dfs(int start,int destination){

    if(visited[destination]==true){
        return;
    }
    
    visited[start]=true;
    cout << start << " ";
    for(int i=0; i<adj[start].size(); i++){
        int next = adj[start][i];
        if(visited[next]==false){
            dfs(next,destination);
        }
    }
}


int main (){

    int node,edges;
    cout << "Enter the number of node and vertices : ";
    cin >> node >> edges;

    for(int i=0; i<edges; i++){
        int x,y;
        cout <<"Enter the edges : ";
        cin >> x >> y;
        edge(x,y);
    }


    // to ensure all the nodes are visited
    // even if the graph is not connected
    // we will run dfs for all the nodes
    // path from start to destination
    int start,destination;
    cout << "Enter the start and destination : ";
    cin >> start >> destination;
    dfs(start,destination);

    return 0;
}