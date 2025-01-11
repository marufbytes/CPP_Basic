#include <bits/stdc++.h>
using namespace std;

void print(int *a, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << *(a + i) << "  ";
    }
    cout << endl;
}

int main()
{

    ifstream fin("1.txt");
    int *a = new int[100];
    for (int i = 0; i < 100; i++)
    {
        fin >> a[i];
    }
    print(a, 100);
}