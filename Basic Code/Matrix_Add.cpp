#include <iostream>
using namespace std;

int main()
{

    int A[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int R[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            R[i][j] = A[i][j] + B[i][j];

            cout << R[i][j] << "  " << "\t";
        }
        cout << endl;
    }

    return 0;
}