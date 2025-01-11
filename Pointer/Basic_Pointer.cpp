#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    cout << "Address of n : " << &n << endl;
    int *ptr = &n;
    cout << "After using pointer : " << ptr << endl; // same
    cout << "Value of n : " << *ptr << endl;         // value

    *ptr = 10;
    cout << "After declaration : " << ptr << endl; // same address
    cout << "New value : " << *ptr << endl;        // new value
    cout << "New value : " << n << endl;           // new value of
}