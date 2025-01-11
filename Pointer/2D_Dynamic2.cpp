
#include <iostream>
using namespace std;

int main()
{

    int rows, cols;
    cout << "rows , cols : ";
    cin >> rows >> cols;

    int **table = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
        delete[] table[i];
    }

    delete[] table;
    table = NULL;

    system("pause >0");
    return 0;
}
