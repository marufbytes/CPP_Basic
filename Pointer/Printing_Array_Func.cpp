#include <iostream>
using namespace std;

void Print(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {

        cout << *(a + i) << "  ";
    }
}

int main()
{

    int n;
    cout << "Number of emlements : ";
    cin >> n;

    int *a = new int[n];
    int i;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << a[0] << endl;

    Print(a, n);

    return 0;
}