#include <iostream>
using namespace std;

void printArray(int *p, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << "  ";
    }
    cout << endl;
}

int *ConcatArray(int *a, int n, int *b, int m)
{
    int i;

    int *c = new int[n + m];
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    for (int j = n; j < n + m; j++)
    {
        c[i] = b[j];
        i++;
    }
    return c;
}

int main()
{

    int a[5] = {10, 20, 30, 40, 50};
    int b[4] = {10, 20, 30, 40};

    printArray(a, 5);
    printArray(b, 4);

    int *k = ConcatArray(a, 5, b, 4);
    printArray(k, 5 + 4);

    return 0;
}