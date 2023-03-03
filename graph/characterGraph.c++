#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
vector<int> adj[MAX];
bool visited[MAX];
int add_matrix[MAX][MAX];

/**
 * @brief 
 * 
 input
 8 10

 A B
A C
B D
B E
C F
C G
E H
F H
G H
D H
              A
            /   \ 
           B     C
          / \   / \
         D   E F  G
         \   \  /  /
              H 
 

 */


void edge(char x, char y){
    int a = (int) x;
    int b = (int) y;
    adj[a].push_back(b);
    adj[b].push_back(a);

    //adjacency matrix
    add_matrix[a][b] = 1;
    add_matrix[b][a] = 1;
}

void printAdjacentList(int V){
    for(int i=0; i<=V; ++i){
        cout << (char) i << ": ";
        for(int j=0; j<adj[i].size(); j++){
            cout << (char) adj[i][j] << " ";
        }
        cout << endl;
    }
}

void printAdjacentMatrix(int V){
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            cout << add_matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void dfs(char start){
    visited[(int) start]=true;
    cout << start << " ";
    for(int i=0; i<adj[(int) start].size(); i++){
        char next = (char) adj[(int) start][i];
        if(visited[(int) next]==false){
            dfs(next);
        }
    }
}

void bfs(char start){
    queue<int> q;
    q.push((int) start);
    visited[(int) start]=true;
    while(!q.empty()){
        int current = q.front();
        cout << (char) current << " ";
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
        char x,y;
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
    for(int i=0; i<MAX; i++){
        visited[i]=false;
    }
    for(int i=0; i<node; i++){
        if (visited[i]==false){
            dfs((char) i);
        }
    }
    cout << endl;

    // to ensure all the nodes are visited
    // even if the graph is not connected
    // we will run bfs for all the nodes
    cout << "bfs : ";
    for(int i=0; i<MAX; i++){
        visited[i]=false;
    }
    for(int i=0; i<node; i++){
        if (visited[i]==false){
            bfs((char) i);
        }
    }
    return 0;
}
