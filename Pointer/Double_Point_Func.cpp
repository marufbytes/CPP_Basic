#include <iostream>
using namespace std;

void PrintArray(int *a, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << *(a + i) << "  ";
    }
    cout << endl;
}

int *Double(int *a, int size)
{

    int *a1 = new int[size];

    for (int i = 0; i < size; i++)
    {
        a1[i] = a[i] * 2;
    }
    return a1;
}

int main()
{

    int a[5] = {5, 10, 15, 20, 25};

    PrintArray(a, 5);
    int *k = Double(a, 5);
    PrintArray(k, 5);

    return 0;
}