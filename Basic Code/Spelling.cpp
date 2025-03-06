#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string spelling[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << spelling[n - 1];

    if (n > 9)
    {
        cout << "Greater than 9";
    }
    
    return 0;
}
