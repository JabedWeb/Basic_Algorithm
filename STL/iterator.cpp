#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;


int main(){
    // int array[3];
    // array[0] = 1;
    // array[1] = 2;

    // cout<<array[0]<<endl;
    // cout<<array[10]<<endl;
    // cout<<array[10]<<endl;

    //vector
    vector <int> v;
    v.push_back(1); // first element
    v.push_back(2); // second element
    v.push_back(10); // third element

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
    }
    puts("");

    cout<<v[0]<<endl;

    // another way to set vector
    v[0] = 5;
    cout<<v[0]<<endl;
    cout<<v[10]<<endl;
}