#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    //asterisk sign point out the value of  memory address
    cout << *p << endl; //10
    cout << *p+1 << endl; //11

    //without asterisk sign it point out the value of memory address 
    cout << p << endl; //6422296

    /**
     * @brief 
     *  as int data type takes 4 bytes and 
     * that why increment 4 that indicates next memory for another variable
     * 
     */
    cout << p+1 << endl; //6422300

    return 0;
}
