#include <bits/stdc++.h>
using namespace std;

int main () {
    stack <string> s;
    s.push("jabed");
    s.push("fahad");
    s.push("shaib");

    while(!s.empty()){
        // first index
        cout<<s.top()<<endl;
        s.pop();
    }
}