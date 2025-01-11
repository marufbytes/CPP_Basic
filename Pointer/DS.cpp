#include <iostream>
using namespace std;

int main(void)
{
    float r[5] = {22.5, 34.8, 46.8, 59.1, 68.3};
    cout << "1st element: " << r[0] << "\n";
    cout << "1st element (using pointer): " << *r << "\n";
    cout << "3rd element: " << r[2] << "\n";
    cout << "3rd element (using pointer): " << *(r + 2) << "\n";

    float *p;
    p = r; // Same as &r[0]
    cout << "1st element (using p): " << p[0] << "\n";
    cout << "1st element (using *p): " << *p << "\n";
    cout << "3rd element (using p): " << p[2] << "\n";
    cout << "3rd element (using *(p+2)): " << *(p + 2) << "\n";

    // Using a separate pointer for iteration to avoid modifying p
    float *iterPtr = p;
    for (int i = 0; i < 5; i++, iterPtr++)
        cout << "Element " << (i + 1) << " is: " << *iterPtr << "\n";

    return 0;
}