#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    // a, b point to &num1 and &num2 respectively
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int num1 = 5, num2 = 10;
    swap(&num1, &num2); // addresses of num1 and num2 are passed
    cout << "Number1 = " << num1 << "\n";
    cout << "Number2 = " << num2 << endl;
    return 0;
}