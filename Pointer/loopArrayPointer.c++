#include<iostream>
using namespace std ;

int main (){
    int a[] = {10, 20, 30, 40, 50};

    for (int i=0;i<5;i++){
        cout << "address " << a+i <<endl;
        cout << "address " << &a[i] <<endl;

        cout << "value " << *(a+i) <<endl;// as int data type takes 4 bytes
        cout << "value " << a[i] <<endl;
    }
}

/** 
 * output
 * 
address 0x61fef8
address 0x61fef8
value 10
value 10

address 0x61fefc
address 0x61fefc
value 20
value 20

address 0x61ff00
address 0x61ff00
value 30
value 30

address 0x61ff04
address 0x61ff04
value 40
value 40

address 0x61ff08
address 0x61ff08
value 50
value 50
*/