#include<bits/stdc++.h>
using namespace std;

int main (){
    // for map need #include<map> header file or bits/stdc
    map <string, int> m;
    map <string, int>::iterator it;
    // jabed 12
    // fahad 14

    m["jabed"] = 12;
    m["fahad"] = 14;
    // another way to insert
    m.insert(make_pair("Shaib", 15));
 
    //print 

    // it=m.begin();
    // cout<<it->first<<" "<<it->second<<endl; 

    for ( it =m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}