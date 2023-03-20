#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;


int main(){
    cout<<"List"<<endl;
    list <float> myList;
    //list <float> myList(4); // 4 element with value 0
    //list <float> myList(4, 10); // 4 element with value 10 
    myList.push_back(11);
    myList.push_back(12);
    myList.push_back(13);
    myList.push_front(10);

    list <float>::iterator it;

    for(it = myList.begin(); it != myList.end(); it++){
        cout<<*it<<"\t";
    }

 

}  