#include <iostream>
using namespace std;
int main()
{

    int s;
    int e;

    cout << "Enter the starting value: ";
    cin >> s;

    cout << "Enter the ending value: ";
    cin >> e;

    for (int i = s; i <= e; i++)
    {

        if (i % 2 == 1)
        {
            cout << i << "  ";
        }
    }

    return 0;
}