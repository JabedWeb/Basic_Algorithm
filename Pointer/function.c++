
#include <iostream>
using namespace std;

void increment(int *p){
    cout << p << endl;//6422300
    *p = *p + 1; //a = 11
}

int main(){
    int a = 10; //a = 10
    cout << a << endl;
    cout << &a << endl;//6422300
    increment(&a);
    cout << a << endl;
    return 0;
}
