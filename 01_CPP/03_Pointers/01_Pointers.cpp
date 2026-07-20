#include <iostream>
using namespace std;

int main(){
    int x;
    x = 65;

    int* ptr = &x; // pointer variable that stores the address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value stored in ptr: " << *ptr << endl;
    cout << "Address stored in ptr: " << ptr << endl;
}