#include <bits/stdc++.h>
using namespace std;

int main()
{

    ofstream fout("1.txt");

    srand(time(0));

    for (int i = 0; i <= 100; i++)
    {
        fout << rand() % 100 << "  " << endl;
    }
}