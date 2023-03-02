#include<iostream>
using namespace std;

int adj[100][100];

int main (){
    int v;
    cout << "Enter the number of vertices: ";
    cin >> v;
    int e;
    cout <<"enter the number of edges: ";
    cin >> e;

    for(int i=0; i<e; ++i){
        int x, y;
        cin >> x >> y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }
    for (int i=0; i<v; i++){
        for(int j=0; j<v; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
return 0;

}


/**
 * @brief 
 * 0 1
2 0
2 1
1 3
3 4
1 4
 * 
 */
