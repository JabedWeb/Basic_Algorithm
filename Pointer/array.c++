#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    /***
     * elements at index i ;
     * address -&a[i] or (a+i)
     * value a[i] or *(a+i)
     */

    cout << a << endl;  // 6422284
    cout << (a+1) << endl;  //6422288

    cout << *a << endl; //10
    cout << *(a+1) << endl; //20

    return 0;
}
