#include <bits/stdc++.h>
using namespace std;

void printArray(int **m, int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << m[i][j] << "   \t";
        }
        cout << endl;
    }
}

int main()
{

    int row;
    int column;
    cout << "Row and col : ";
    cin >> row >> column;

    cout << endl;

    int **m = new int *[row];
    for (int i = 0; i < row; i++)
    {
        m[i] = new int[column];
    }

    srand(time(0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            m[i][j] = rand() % 101;
        }
    }

    printArray(m, row, column);

    for (int i = 0; i < row; i++)
    {
        delete[] m[i];
    }
    delete[] m;

    return 0;
}