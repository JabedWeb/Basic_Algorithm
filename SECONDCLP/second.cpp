/**
 * Name : Md Jabed Hossen
 * ID : 213902046
 * Section : DB
 * Email :213902046@student.grren.edu.bd
 * Problem Name : show the even number from an array of 10 numbers
 * 
 */
#include <iostream>
using namespace std;
int main (){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout << "The even numbers are : ";
    for(int i=0; i<10; i++){
        if(arr[i]%2==0){
            cout << arr[i] << endl;
        }
    }
    return 0;
}