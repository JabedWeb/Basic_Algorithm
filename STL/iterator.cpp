#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;


int main(){
 
    //vector
    vector <int> v;
   for(int i = 0; i < 10; i++){
       v.push_back(i);
   }

    // print vector using iterator
    vector <int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout<<*it<<"\t";
    }
}  