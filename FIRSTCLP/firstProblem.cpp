

#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
vector<int> adj[MAX];
bool visited[MAX];
int add_matrix[MAX][MAX];



void edge(int x, int y){
    adj[x].push_back(y);
    adj[y].push_back(x);


    //adjacency matrix
    add_matrix[x][y] = 1;
    add_matrix[y][x] = 1;
}


//adjacency list
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

output
1: 2 3
2: 1 4
3: 1 4
4: 2 3
*/


void printAdjacentList(int V){
    for(int i=0; i<=V; ++i){
        cout << i << ": ";
        for(int j=0; j<adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

// adjacency matrix
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
output
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0

*/

void printAdjacentMatrix(int V){
    for(int i=1; i<=V; i++){
        for(int j=1; j<=V; j++){
            cout << add_matrix[i][j] << " ";
        }
        cout << endl;
    }
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

output
1 2 4 3        

*/
void dfs(int start){
    visited[start]=true;
    cout << start << " ";
    for(int i=0; i<adj[start].size(); i++){
        int next = adj[start][i];
        if(visited[next]==false){
            dfs(next);
        }
    }
}


//bfs
/*
output 1 2 3 4
*/        

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int current = q.front();
        cout << current << " ";
        q.pop();
        for(int i=0; i<adj[current].size(); i++){
            int next = adj[current][i];
            if(visited[next]==false){
                q.push(next);
                visited[next]=true;
            }
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

    //adjacency list
    cout << "adjacency list : " << endl;
    printAdjacentList(node);


    //adjacency matrix
    cout << "adjacency matrix : " << endl;
    printAdjacentMatrix(node);



    // to ensure all the nodes are visited
    // even if the graph is not connected
    // we will run dfs for all the nodes

    cout << "dfs : ";
    for(int i=1; i<node; i++){
        if (visited[i]==false){
            dfs(i);
        }
    }

    //reset visited array to false
    for(int i=0; i<MAX; i++){
        visited[i]=false;
    }
    cout << endl;

    // to ensure all the nodes are visited
    // even if the graph is not connected
    // we will run bfs for all the nodes

    cout << "bfs : ";
    for(int i=1; i<node; i++){
        if (visited[i]==false){
            bfs(i);
        }
    }
    return 0;
}