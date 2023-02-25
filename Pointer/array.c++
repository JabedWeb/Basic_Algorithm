#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    /***
     * elements at index i ;
     * address -&a[i] or (a+i)
     * value a[i] or *(a+i)
     */

    cout << "address " << a << endl; //0x61fefc
    cout << &a[0] << endl; //0x61fefc
    cout << (a+1) << endl;  //0x61ff00

    cout << *a << endl; //10
    cout << a[0] << endl; //10
    cout << *(a+1) << endl; //20

    return 0;
}
