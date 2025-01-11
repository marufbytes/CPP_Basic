#include <iostream>
using namespace std;

void PrintArray(int *p, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << "  ";
    }
    cout << endl;
}

int *reverseArray(int *p, int n)
{

    int *k = new int[n];

    int i, j;

    for (i = n - 1, j = 0; i >= 0, j < n; i--, j++)
    {

        k[j] = p[i];
    }
    return k;
}

int main()
{

    int a[5] = {10, 20, 30, 40, 50};
    PrintArray(a, 5);

    int *t = reverseArray(a, 5);
    PrintArray(t, 5);

    return 0;
}