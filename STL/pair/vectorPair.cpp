#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <pair<int, string>> v;
    //0 -46 Jabed
    //1 -45 Nayeem
    //2 -44 Rony

    v.push_back(make_pair(46,"Jabed"));
    v.push_back(make_pair(45,"Nayeem"));
    v.push_back(make_pair(44,"Rony"));

    // print 
    cout<<v[0].first<<" "<<v[0].second<<endl;

    // print with loop
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    // print vector using iterator
    vector <pair<int, string>>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

}