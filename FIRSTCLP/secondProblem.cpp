#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
vector<char> adj[MAX];
bool visited[MAX];
int add_matrix[MAX][MAX];

void edge(char x, char y){
    adj[x - 'A'].push_back(y);
    adj[y - 'A'].push_back(x);

    //adjacency matrix
    add_matrix[x - 'A'][y - 'A'] = 1;
    add_matrix[y - 'A'][x - 'A'] = 1;
}


//adjacency list
/*
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


output
A: B C
B: A D E
C: A F G
D: B H
E: B H
F: C H
G: C H
H: D E F G

*/

void printAdjacentList(int V){
    for(int i=0; i<V; ++i){
        cout << (char) (i + 'A') << ": ";
        for(int j=0; j<adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}


// adjacency matrix
/*
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

output
0 1 1 0 0 0 0 0
1 0 0 1 1 0 0 0
1 0 0 0 0 1 1 0
0 1 0 0 0 0 0 1
0 1 0 0 0 0 0 1
0 0 1 0 0 0 0 1
0 0 1 0 0 0 0 1
0 0 0 1 1 1 1 0

*/
void printAdjacentMatrix(int V){
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            cout << add_matrix[i][j] << " ";
        }
        cout << endl;
    }
}

//dfs
/*
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

                     A
                 /   \
                 B     C
                 / \   / \
                 D   E F  G
                 \   \  /  /
                      H

output
A B D E H C F G
*/

void dfs(char start){
    visited[start - 'A'] = true;
    cout << start << " ";
    for(int i=0; i<adj[start - 'A'].size(); i++){
        char next = adj[start - 'A'][i];
        if(!visited[next - 'A']){
            dfs(next);
        }
    }
}



//bfs
/*
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
output
A B C D E F G H
*/

void bfs(char start){
    queue<char> q;
    q.push(start);
    visited[start - 'A'] = true;
    while(!q.empty()){
        char current = q.front();
        cout << current << " ";
        q.pop();
        for(int i=0; i<adj[current - 'A'].size(); i++){
            char next = adj[current - 'A'][i];
            if(!visited[next - 'A']){
                q.push(next);
                visited[next - 'A'] = true;
            }
        }
    }
}

int main (){
    int node,edges;
    cout << "Enter the number of nodes and edges: ";
    cin >> node >> edges;

    for(int i=0; i<edges; i++){
        char x,y;
        cout << "Enter the edges: ";
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
    cout << "dfs: ";
    for(int i=0; i<node; i++){
        if(!visited[i]){
            dfs(i + 'A');
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
    cout << "bfs: ";
    for(int i=0; i<node; i++){
        if(!visited[i]){
            bfs(i + 'A');
        }
    }

    return 0;
}
