#include <bits/stdc++.h>
using namespace std;

void printArray(int *p, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << "  ";
    }
    cout << endl;
}

int main()
{

    ifstream fin("1.txt");
    int *a = new int[1000];
    for (int i = 0; i < 1000; i++)
    {
        fin >> a[i];
    }
    printArray(a, 1000);
}