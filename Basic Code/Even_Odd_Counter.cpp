#include <iostream>
using namespace std;

int main()
{
    int A[] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};
    int count = 0;
    int counter = 0;

    for (int i = 0; i < 10; i++)
    {
        if (A[i] % 2 == 0)
        {

            count++;
        }
        else
        {

            counter++;
        }
    }

    cout << "Total Even Numbers: " << count << endl;
    cout << "Total Odd Numbers: " << count << endl;

    return 0;
}