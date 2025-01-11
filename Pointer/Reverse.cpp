#include <iostream>
using namespace std;

void Print(int *a, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << *(a + i) << "   ";
    }
    cout << endl;
}

int *reverseArray(int *p, int size)
{

    int *k = new int[size];

    int i = size - 1;
    int j = 0;

    while (i >= 0)
    {
        *(k + j) = *(p + i);
        i--;
        j++;
    }

    return k;
}

int main()
{

    int a[5] = {10, 20, 30, 40, 50};

    Print(a, 5);

    int *p = reverseArray(a, 5);

    Print(p, 5);
}