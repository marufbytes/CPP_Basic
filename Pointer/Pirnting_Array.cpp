#include <iostream>
using namespace std;

int main()
{

    int luckyNumber[5];

    // cout<<luckyNumber<<endl;
    // cout<<&luckyNumber[0]<<endl;
    // cout<<luckyNumber[2]<<endl;
    // cout<<*(luckyNumber+2)<<endl;

    for (int i = 0; i <= 4; i++)
    {

        cout << "Number : ";
        cin >> luckyNumber[i];
    }

    for (int i = 0; i <= 4; i++)
    {

        cout << *(luckyNumber + i) << "  ";
    }

    system("Pause>0");
    return 0;
}